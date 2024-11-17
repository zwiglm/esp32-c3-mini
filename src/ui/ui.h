// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.2.3
// LVGL version: 8.3.3
// Project name: C3_Watch


/*
    Copyright (c) 2024 Felix Biego. All rights reserved.
    This work is licensed under the terms of the MIT license.  
    For a copy, see <https://opensource.org/licenses/MIT>.
*/

#ifndef _C3_WATCH_UI_H
#define _C3_WATCH_UI_H

#define MAX_FACES 15
#define MAX_GAMES 10

#ifdef __cplusplus
extern "C"
{
#endif

#include "lvgl.h"

#include "ui_events.h"

#include "games/racing/racing.h"
#include "games/simon/simon.h"
#include "apps/qmi8658c/qmi8658c.h"
#include "apps/navigation/navigation.h"
#include "apps/contacts/contacts.h"
#include "apps/piobot/piobot.h"
#include "apps/attitude/attitude.h"

    extern const char *ui_info_text;
    void pulseCall_Animation(lv_obj_t *TargetObject, int delay);
    void analogSecond_Animation(lv_obj_t *TargetObject, int delay);
    extern lv_anim_t secondsAnimation_0;
    void ui_event_clockScreen(lv_event_t *e);
    extern lv_obj_t *ui_clockScreen;
    extern lv_obj_t *ui_hourLabel;
    extern lv_obj_t *ui_minuteLabel;
    extern lv_obj_t *ui_dateLabel;
    extern lv_obj_t *ui_weatherIcon;
    extern lv_obj_t *ui_weatherTemp;
    extern lv_obj_t *ui_dayLabel;
    extern lv_obj_t *ui_amPmLabel;
    void ui_event_alertPanel(lv_event_t *e);
    extern lv_obj_t *ui_alertPanel;
    extern lv_obj_t *ui_alertIcon;
    extern lv_obj_t *ui_alertText;
    void ui_event_weatherScreen(lv_event_t *e);
    extern lv_obj_t *ui_weatherScreen;
    extern lv_obj_t *ui_weatherPanel;
    extern lv_obj_t *ui_weatherCity;
    extern lv_obj_t *ui_weatherCurrentIcon;
    extern lv_obj_t *ui_weatherCurrentTemp;
    extern lv_obj_t *ui_weatherUpdateTime;
    extern lv_obj_t *ui_forecastList;
    extern lv_obj_t *ui_hourlyList;
    void ui_event_notificationScreen(lv_event_t *e);
    extern lv_obj_t *ui_notificationScreen;
    extern lv_obj_t *ui_messagePanel;
    extern lv_obj_t *ui_messageIcon;
    extern lv_obj_t *ui_messageTime;
    extern lv_obj_t *ui_messageContent;
    extern lv_obj_t *ui_messageList;
    void ui_event_appListScreen(lv_event_t *e);
    extern lv_obj_t *ui_appListScreen;
    extern lv_obj_t *ui_appList;

    void ui_event_gameListScreen(lv_event_t *e);
    extern lv_obj_t *ui_gameListScreen;
    extern lv_obj_t *ui_gameList;

    void ui_event_alertStateSwitch(lv_event_t *e);
    extern lv_obj_t *ui_alertStateLabel;
    extern lv_obj_t *ui_alertStateSwitch;
    extern lv_obj_t *ui_alertStateIcon;
    extern lv_obj_t *ui_alertStatePanel;
    void ui_event_navStateSwitch(lv_event_t *e);
    extern lv_obj_t *ui_navStateLabel;
    extern lv_obj_t *ui_navStateSwitch;
    extern lv_obj_t *ui_navStateIcon;
    extern lv_obj_t *ui_navStatePanel;
    void ui_event_settingsScreen(lv_event_t *e);
    extern lv_obj_t *ui_settingsScreen;
    extern lv_obj_t *ui_settingsList;
    extern lv_obj_t *ui_settingsTitle;
    extern lv_obj_t *ui_brightnessPanel;
    void ui_event_brightnessSlider(lv_event_t *e);
    extern lv_obj_t *ui_brightnessSlider;
    extern lv_obj_t *ui_brightnessIcon;
    extern lv_obj_t *ui_brightnessLabel;
    extern lv_obj_t *ui_scrollingPanel;
    extern lv_obj_t *ui_scrollIcon;
    void ui_event_scrollMode(lv_event_t *e);
    extern lv_obj_t *ui_Switch2;
    extern lv_obj_t *ui_scrollLabel;
    extern lv_obj_t *ui_timeoutPanel;
    void ui_event_timeoutSelect(lv_event_t *e);
    extern lv_obj_t *ui_timeoutSelect;
    extern lv_obj_t *ui_timeoutIcon;
    extern lv_obj_t *ui_timeoutLabel;
    extern lv_obj_t *ui_rotatePanel;
    void ui_event_rotateSelect(lv_event_t *e);
    extern lv_obj_t *ui_rotateSelect;
    extern lv_obj_t *ui_rotateIcon;
    extern lv_obj_t *ui_rotateLabel;
    extern lv_obj_t *ui_languagePanel;
    void ui_event_languageSelect(lv_event_t *e);
    extern lv_obj_t *ui_languageSelect;
    extern lv_obj_t *ui_languageIcon;
    extern lv_obj_t *ui_languageLabel;
    extern lv_obj_t *ui_batteryPanel;
    void ui_event_batterySlider(lv_event_t *e);
    extern lv_obj_t *ui_batterySlider;
    extern lv_obj_t *ui_batteryIcon;
    extern lv_obj_t *ui_batteryLabel;
    extern lv_obj_t *ui_aboutPanel;
    extern lv_obj_t *ui_aboutIcon;
    extern lv_obj_t *ui_aboutText;
    void ui_event_kenyaPanel(lv_event_t *e);
    extern lv_obj_t *ui_kenyaPanel;
    extern lv_obj_t *ui_kenyaIcon;
    extern lv_obj_t *ui_kenyaText;
    void ui_event_controlScreen(lv_event_t *e);
    extern lv_obj_t *ui_controlScreen;
    void ui_event_musicPlayButton(lv_event_t *e);
    extern lv_obj_t *ui_musicPlayButton;
    void ui_event_musicPrevButton(lv_event_t *e);
    extern lv_obj_t *ui_musicPrevButton;
    void ui_event_musicNextButton(lv_event_t *e);
    extern lv_obj_t *ui_musicNextButton;
    extern lv_obj_t *ui_btStateButton;
    extern lv_obj_t *ui_searchPanel;
    void ui_event_phoneSearchButton(lv_event_t *e);
    extern lv_obj_t *ui_phoneSearchButton;
    void ui_event_volumeUpButton(lv_event_t *e);
    extern lv_obj_t *ui_volumeUpButton;
    void ui_event_volumeDownButton(lv_event_t *e);
    extern lv_obj_t *ui_volumeDownButton;
    void ui_event_qrCodeButton(lv_event_t *e);
    extern lv_obj_t *ui_qrCodeButton;
    void ui_event_closeControlButton(lv_event_t *e);
    extern lv_obj_t *ui_closeControlButton;

    void ui_event_appInfoScreen(lv_event_t *e);
    extern lv_obj_t *ui_appInfoScreen;
    extern lv_obj_t *ui_appInfoPanel;
    extern lv_obj_t *ui_appInfoTitle;
    extern lv_obj_t *ui_appDetailsPanel;
    extern lv_obj_t *ui_appDetailsIcon;
    extern lv_obj_t *ui_appDetailsText;
    extern lv_obj_t *ui_appConnectionPanel;
    extern lv_obj_t *ui_appConnectionIcon;
    extern lv_obj_t *ui_appConnectionText;
    extern lv_obj_t *ui_appBatteryPanel;
    extern lv_obj_t *ui_appBatteryIcon;
    extern lv_obj_t *ui_appBatteryText;
    extern lv_obj_t *ui_appBatteryLevel;

    void ui_event_findPhone(lv_event_t *e);
    extern lv_obj_t *ui_findPhoneScreen;
    extern lv_obj_t *ui_findTitle;
    void ui_event_findButton(lv_event_t *e);
    extern lv_obj_t *ui_findButton;
    extern lv_obj_t *ui_findButtonText;
    extern lv_obj_t *ui_findPanel;
    extern lv_obj_t *ui_findIcon;
    void ui_event_logoScreen(lv_event_t *e);
    extern lv_obj_t *ui_logoScreen;
    void ui_event_lvglLogo(lv_event_t *e);
    // extern lv_obj_t *ui_lvglLogo;
    extern lv_obj_t *ui_lvglLogoBlack;
    extern lv_obj_t *ui_lvglLogoBlue;
    extern lv_obj_t *ui_lvglLogoGreen;
    extern lv_obj_t *ui_lvglLogoRed;

    void ui_event_connectScreen(lv_event_t *e);
    extern lv_obj_t *ui_connectScreen;
    extern lv_obj_t * ui_connectImage;
    extern lv_obj_t * ui_connectText;

    void ui_event_callScreen(lv_event_t *e);
    extern lv_obj_t *ui_callScreen;
    extern lv_obj_t *ui_callIcon;
    extern lv_obj_t *ui_callLabel;
    extern lv_obj_t *ui_callName;

    extern lv_obj_t *ui_cameraScreen;
    extern lv_obj_t *ui_cameraPanel;
    extern lv_obj_t *ui_cameraTitle;
    extern lv_obj_t *ui_cameraIcon;
    extern lv_obj_t *ui_cameraLabel;
    extern lv_obj_t *ui_cameraButton;
    extern lv_obj_t *ui_cameraButtonLabel;

    void ui_event_qrScreen(lv_event_t *e);
    extern lv_obj_t *ui_qrScreen;
    extern lv_obj_t *ui_qrPanel;
    extern lv_obj_t *ui_qrItem;
    extern lv_obj_t *ui_qrIcon;
    extern lv_obj_t *ui_qrImage;
    extern lv_obj_t *ui_qrLabel;

    void ui_filesScreen_screen_init(void);
    extern lv_obj_t *ui_filesScreen;
    extern lv_obj_t *ui_fileManagerPanel;
    extern lv_obj_t *ui_driveInfoPanel;
    extern lv_obj_t *ui_driveInfoIcon;
    extern lv_obj_t *ui_driveInfoLabel;
    extern lv_obj_t *ui_driveInfoBar;
    extern lv_obj_t *ui_fileInfoPanel;
    extern lv_obj_t *ui_fileInfoIcon;
    extern lv_obj_t *ui_fileInfoName;
    extern lv_obj_t *ui_fileInfoSize;
    extern lv_obj_t *ui_folderInfoPanel;
    extern lv_obj_t *ui_folderInfoIcon;
    extern lv_obj_t *ui_folderInfoName;
    extern lv_obj_t *ui_driveBackPanel;
    extern lv_obj_t *ui_driveBackIcon;
    extern lv_obj_t *ui_driveBackLabel;

    extern lv_obj_t *ui_errorWindow;
    extern lv_obj_t *ui_errorPanel;
    extern lv_obj_t *ui_errorTitle;
    extern lv_obj_t *ui_errorMessage;
    void ui_event_errorClose(lv_event_t *e);
    extern lv_obj_t *ui_errorClose;
    extern lv_obj_t *ui_errorCloseText;

    extern lv_obj_t *ui_home;
    extern lv_obj_t *ui_faceSelect;

    extern lv_obj_t *face_custom_root;

    void onScroll(lv_event_t *e);

    extern bool toAppList;
    extern bool circular;
    extern int numFaces;
    extern int numGames;
    extern int currentIndex;
    extern bool screenOn;

    void ui_event____initial_actions0(lv_event_t *e);
    extern lv_obj_t *ui____initial_actions0;

    typedef struct WatchFace
    {
        const char *name;
        const lv_image_dsc_t *preview;
        lv_obj_t **watchface;
        lv_obj_t **seconds; // analog second hand
        bool custom;
        int customIndex;
    } Face;

    typedef struct DragEvent
    {
        bool dragging;
        bool active;
        int x;
        int y;
    } Drag;

    extern Face faces[MAX_FACES];
    extern Face games[MAX_GAMES];


    void registerWatchface_cb(const char *name, const lv_image_dsc_t *preview, lv_obj_t **watchface, lv_obj_t **seconds);
    void ui_update_watchfaces(int second, int minute, int hour, bool mode, bool am, int day, int month, int year, int weekday,
                              int temp, int icon, int battery, bool connection, int steps, int distance, int kcal, int bpm, int oxygen);
    void ui_update_seconds(int second);

    void addNotificationList(int appId, const char *message, int index);
    void addForecast(int day, int temp, int icon);
    void addHourlyWeather(int hour, int icon, int temp, int humidity, int wind, int uv, bool info);
    void addQrList(uint8_t id, const char *link);
    void setWeatherIcon(lv_obj_t *obj, int id, bool day);
    void setNotificationIcon(lv_obj_t *obj, int appId);
    void ui_games_update(void);
    void showError(const char *title, const char *message);
    void addWatchface(const char *name, const lv_image_dsc_t *src, int index);

    void addListDrive(const char *name, int total, int used, lv_event_cb_t event_cb);
    void addListDir(const char *name);
    void addListFile(const char *name, int size);
    void addListBack(lv_event_cb_t event_cb);

    void addFaceList(lv_obj_t *parent, Face face);

    // LV_IMG_DECLARE(ui_img_753022056);      // assets\night-sky.png
    LV_IMG_DECLARE(ui_img_602195540);  // assets\dy-6.png
    LV_IMG_DECLARE(ui_img_wechat_png); // assets\wechat.png
    // LV_IMG_DECLARE(ui_img_857483832);      // assets\day-sky.png
    LV_IMG_DECLARE(ui_img_602206286);      // assets\dy-0.png
    LV_IMG_DECLARE(ui_img_chrns_png);      // assets\chrns.png
    LV_IMG_DECLARE(ui_img_brightness_png); // assets\brightness.png
    LV_IMG_DECLARE(ui_img_scrolling_png);  // assets\scrolling.png
    LV_IMG_DECLARE(ui_img_timeout_png);    // assets\timeout.png
    LV_IMG_DECLARE(ui_img_bat_png);        // assets\bat.png
    LV_IMG_DECLARE(ui_img_info_png);       // assets\info.png
    LV_IMG_DECLARE(ui_img_play_png);       // assets\play.png
    LV_IMG_DECLARE(ui_img_1592976543);     // assets\left-arrow.png
    LV_IMG_DECLARE(ui_img_2138854088);     // assets\right-arrow.png
    LV_IMG_DECLARE(ui_img_bt_png);         // assets\bt.png
    LV_IMG_DECLARE(ui_img_search_png);     // assets\search.png
    LV_IMG_DECLARE(ui_img_camera_png);     // assets\camera.png
    LV_IMG_DECLARE(ui_img_602205261);      // assets\dy-1.png
    LV_IMG_DECLARE(ui_img_602199888);      // assets\dy-2.png
    LV_IMG_DECLARE(ui_img_602207311);      // assets\dy-3.png
    LV_IMG_DECLARE(ui_img_602200913);      // assets\dy-5.png
    LV_IMG_DECLARE(ui_img_602202963);      // assets\dy-7.png
    LV_IMG_DECLARE(ui_img_dy4_png);        // assets\dy4.png
    LV_IMG_DECLARE(ui_img_facebook_png);   // assets\facebook.png
    // LV_IMG_DECLARE( ui_img_forest_png);   // assets\forest.png
    LV_IMG_DECLARE(ui_img_instagram_png); // assets\instagram.png
    LV_IMG_DECLARE(ui_img_kakao_png);     // assets\kakao.png
    // LV_IMG_DECLARE( ui_img_lake_png);   // assets\lake.png
    LV_IMG_DECLARE(ui_img_line_png);      // assets\line.png
    LV_IMG_DECLARE(ui_img_mail_png);      // assets\mail.png
    LV_IMG_DECLARE(ui_img_messenger_png); // assets\messenger.png
    // LV_IMG_DECLARE( ui_img_mountain_png);   // assets\mountain.png
    LV_IMG_DECLARE(ui_img_notify_png);        // assets\notify.png
    LV_IMG_DECLARE(ui_img_229834011);         // assets\nt-0.png
    LV_IMG_DECLARE(ui_img_229835036);         // assets\nt-1.png
    LV_IMG_DECLARE(ui_img_229827613);         // assets\nt-2.png
    LV_IMG_DECLARE(ui_img_229828638);         // assets\nt-3.png
    LV_IMG_DECLARE(ui_img_229838359);         // assets\nt-4.png
    LV_IMG_DECLARE(ui_img_229839384);         // assets\nt-5.png
    LV_IMG_DECLARE(ui_img_229831961);         // assets\nt-6.png
    LV_IMG_DECLARE(ui_img_229832986);         // assets\nt-7.png
    LV_IMG_DECLARE(ui_img_penguin_png);       // assets\penguin.png
    LV_IMG_DECLARE(ui_img_qr_png);            // assets\qr.png
    LV_IMG_DECLARE(ui_img_setting_png);       // assets\setting.png
    LV_IMG_DECLARE(ui_img_skype_png);         // assets\skype.png
    LV_IMG_DECLARE(ui_img_sms_png);           // assets\sms.png
    LV_IMG_DECLARE(ui_img_stars_png);         // assets\stars.png
    LV_IMG_DECLARE(ui_img_telegram_png);      // assets\telegram.png
    LV_IMG_DECLARE(ui_img_twitter_png);       // assets\twitter.png
    LV_IMG_DECLARE(ui_img_viber_png);         // assets\viber.png
    LV_IMG_DECLARE(ui_img_vkontakte_png);     // assets\vkontakte.png
    LV_IMG_DECLARE(ui_img_weibo_png);         // assets\weibo.png
    LV_IMG_DECLARE(ui_img_whatsapp_png);      // assets\whatsapp.png
    LV_IMG_DECLARE(ui_img_play_pause_g_png);  // assets\play_pause_g.png
    LV_IMG_DECLARE(ui_img_previous_g_png);    // assets\previous_g.png
    LV_IMG_DECLARE(ui_img_next_g_png);        // assets\next_g.png
    LV_IMG_DECLARE(ui_img_bluetooth_g_png);   // assets\bluetooth_g.png
    LV_IMG_DECLARE(ui_img_search_g_png);      // assets\search_g.png
    LV_IMG_DECLARE(ui_img_volupe_up_g_png);   // assets\volupe_up_g.png
    LV_IMG_DECLARE(ui_img_volume_down_g_png); // assets\volume_down_g.png
    LV_IMG_DECLARE(ui_img_qr_icon_png);       // assets\qr_icon.png
    LV_IMG_DECLARE(ui_img_twitter_x_png);     // assets\twitter_x.png

    LV_IMG_DECLARE(ui_img_battery_plugged_png); // assets\battery_plugged.png
    LV_IMG_DECLARE(ui_img_ble_app_png);         // assets\ble_app.png
    LV_IMG_DECLARE(ui_img_battery_state_png);   // assets\battery_state.png
    LV_IMG_DECLARE(ui_img_answer_png);          // assets\answer.png
    LV_IMG_DECLARE(ui_img_app_info_png);        // assets\app_info.png
    LV_IMG_DECLARE(ui_img_smartwatch_png);      // assets\smartwatch.png
    LV_IMG_DECLARE(ui_img_vol_up_png);          // assets\vol_up.png
    LV_IMG_DECLARE(ui_img_vol_down_png);        // assets\vol_down.png
    LV_IMG_DECLARE(ui_img_pay_png);             // assets\pay.png
    LV_IMG_DECLARE(ui_img_web_png);             // assets\web.png
    LV_IMG_DECLARE(ui_img_kenya_png);           // assets\kenya.png
    LV_IMG_DECLARE(ui_img_lvgl_logo_png);       // assets\lvgl_logo.png
    LV_IMG_DECLARE(ui_img_lvgl_logo_black_png); // assets/lvgl_logo_black.png
    LV_IMG_DECLARE(ui_img_lvgl_logo_red_png);   // assets/lvgl_logo_red.png
    LV_IMG_DECLARE(ui_img_lvgl_logo_green_png); // assets/lvgl_logo_green.png
    LV_IMG_DECLARE(ui_img_lvgl_logo_blue_png);  // assets/lvgl_logo_blue.png
    LV_IMG_DECLARE(ui_img_game_icon_png);       // assets\game_icon.png
    LV_IMG_DECLARE(ui_img_language_png);        // assets\language.png
    LV_IMG_DECLARE(ui_img_file_manager_png);
    LV_IMG_DECLARE(ui_img_drive_png);     // assets/drive.png
    LV_IMG_DECLARE(ui_img_file_png);      // assets/file.png
    LV_IMG_DECLARE(ui_img_directory_png); // assets/directory.png
    LV_IMG_DECLARE(ui_img_back_file_png); // assets/back_file.png
    LV_IMG_DECLARE(ui_img_clock_png);     // assets/clock.png
    LV_IMG_DECLARE(ui_img_bin_png);       // assets/bin.png
    LV_IMG_DECLARE(ui_img_up_arrow_png);   // assets/up_arrow.png
    LV_IMG_DECLARE(ui_img_screen_rotate_png);   // assets/screen_rotate.png

    LV_IMG_DECLARE(ui_img_wechat_pay_png);
    LV_IMG_DECLARE(ui_img_alipay_png);
    LV_IMG_DECLARE(ui_img_paypal_png);

    LV_IMG_DECLARE(digital_preview);
    LV_IMG_DECLARE(ui_img_alert_icon_png);
    LV_IMG_DECLARE(ui_img_general_settings_png);
    LV_IMG_DECLARE(ui_img_notifications_app_png);
    LV_IMG_DECLARE(ui_img_weather_app_png);

    void ui_init(void);
    void ui_setup(void);

    
    

#ifdef __cplusplus
} /*extern "C"*/
#endif

#endif
