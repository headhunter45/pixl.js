#include "app_chameleon.h"
#include "chameleon_scene.h"

#include "mini_app_launcher.h"
#include "mini_app_registry.h"

#include "amiibo_helper.h"
#include "nrf_log.h"
#include "nrf_log_ctrl.h"

#include "i18n/language.h"
#include "settings.h"

#define ICON_MODE 0xe135
#define ICON_BACK 0xe069
#define ICON_HOME 0xe1f0
#define ICON_AUTO 0xe11f
#define ICON_PROTO 0xe042
#define ICON_VER 0xe0be

#define CHAMELEON_MENU_BACK_EXIT 0
#define CHAMELEON_MENU_BACK_MAIN 1
#define CHAMELEON_MENU_MODE 2
#define CHAMELEON_MENU_VER 3
#define CHAMELEON_MENU_AUTO_GENERATE 4


void chameleon_scene_menu_on_event(mui_list_view_event_t event, mui_list_view_t *p_list_view, mui_list_item_t *p_item) {
    app_chameleon_t *app = p_list_view->user_data;
    switch (p_item->icon) {
    case ICON_HOME:
        mini_app_launcher_exit(mini_app_launcher());
        break;
    }
}

void chameleon_scene_menu_on_enter(void *user_data) {
    app_chameleon_t *app = user_data;

    mui_list_view_add_item(app->p_list_view, ICON_HOME, "卡槽: 01", (void *)CHAMELEON_MENU_BACK_EXIT);
    mui_list_view_add_item(app->p_list_view, ICON_HOME, "卡类型 [Mifare 4K]", (void *)CHAMELEON_MENU_BACK_EXIT);
    mui_list_view_add_item(app->p_list_view, ICON_HOME, "ID [00:11:22:AA:BB:CC]", (void *)CHAMELEON_MENU_BACK_EXIT);
    mui_list_view_add_item(app->p_list_view, ICON_HOME, "SAK [00]", (void *)CHAMELEON_MENU_BACK_EXIT);
    mui_list_view_add_item(app->p_list_view, ICON_HOME, "ATQA [00 44]", (void *)CHAMELEON_MENU_BACK_EXIT);
    mui_list_view_add_item(app->p_list_view, ICON_HOME, "Gen1A 模式 [开]", (void *)CHAMELEON_MENU_BACK_EXIT);
    mui_list_view_add_item(app->p_list_view, ICON_HOME, "Gen2 模式 [开]", (void *)CHAMELEON_MENU_BACK_EXIT);
    mui_list_view_add_item(app->p_list_view, ICON_HOME, "区块0 识别 [开]", (void *)CHAMELEON_MENU_BACK_EXIT);
    mui_list_view_add_item(app->p_list_view, ICON_HOME, "写模式 [正常]", (void *)CHAMELEON_MENU_BACK_EXIT);

    mui_list_view_add_item(app->p_list_view, ICON_VER, getLangString(_L_TAG_DETAILS), (void *)CHAMELEON_MENU_BACK_MAIN);

    mui_list_view_add_item(app->p_list_view, ICON_HOME, getLangString(_L_MAIN_MENU), (void *)CHAMELEON_MENU_BACK_EXIT);

    mui_list_view_set_selected_cb(app->p_list_view, chameleon_scene_menu_on_event);
    mui_view_dispatcher_switch_to_view(app->p_view_dispatcher, CHAMELEON_VIEW_ID_LIST);
}

void chameleon_scene_menu_on_exit(void *user_data) {
    app_chameleon_t *app = user_data;
    mui_list_view_clear_items(app->p_list_view);
}