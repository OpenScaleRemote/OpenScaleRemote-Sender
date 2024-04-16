// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.4.0
// LVGL version: 8.3.11
// Project name: OpenRemote_Sender_Ui

#include "../ui.h"

void ui_Menu_screen_init(void)
{
    ui_Menu = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_Menu, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_Menu, lv_color_hex(0xA0A0A0), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Menu, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_ExitButton = lv_btn_create(ui_Menu);
    lv_obj_set_width(ui_ExitButton, 36);
    lv_obj_set_height(ui_ExitButton, 36);
    lv_obj_set_x(ui_ExitButton, 2);
    lv_obj_set_y(ui_ExitButton, 2);
    lv_obj_add_flag(ui_ExitButton, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_ExitButton, LV_OBJ_FLAG_PRESS_LOCK | LV_OBJ_FLAG_CLICK_FOCUSABLE | LV_OBJ_FLAG_GESTURE_BUBBLE |
                      LV_OBJ_FLAG_SNAPPABLE | LV_OBJ_FLAG_SCROLLABLE);     /// Flags
    lv_obj_set_style_bg_color(ui_ExitButton, lv_color_hex(0xC14022), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_ExitButton, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Panel1 = lv_obj_create(ui_Menu);
    lv_obj_set_width(ui_Panel1, 276);
    lv_obj_set_height(ui_Panel1, 36);
    lv_obj_set_x(ui_Panel1, 42);
    lv_obj_set_y(ui_Panel1, 2);
    lv_obj_clear_flag(ui_Panel1, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_Panel1, lv_color_hex(0xBFFF00), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Panel1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_Panel1, lv_color_hex(0xBFFF00), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_Panel1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_ExitLabel = lv_label_create(ui_Menu);
    lv_obj_set_width(ui_ExitLabel, 36);
    lv_obj_set_height(ui_ExitLabel, 16);
    lv_obj_set_x(ui_ExitLabel, 2);
    lv_obj_set_y(ui_ExitLabel, 12);
    lv_label_set_text(ui_ExitLabel, "Exit");
    lv_obj_set_style_text_color(ui_ExitLabel, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_ExitLabel, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_ExitLabel, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_MenuLabel = lv_label_create(ui_Menu);
    lv_obj_set_width(ui_MenuLabel, 90);
    lv_obj_set_height(ui_MenuLabel, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_MenuLabel, 125);
    lv_obj_set_y(ui_MenuLabel, 12);
    lv_label_set_text(ui_MenuLabel, "Hauptmenu");

    ui_ServoButton = lv_btn_create(ui_Menu);
    lv_obj_set_width(ui_ServoButton, 276);
    lv_obj_set_height(ui_ServoButton, 36);
    lv_obj_set_x(ui_ServoButton, 42);
    lv_obj_set_y(ui_ServoButton, 42);
    lv_obj_add_flag(ui_ServoButton, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_ServoButton, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_ServoButton, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_ServoButton, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_ServoLabel = lv_label_create(ui_Menu);
    lv_obj_set_width(ui_ServoLabel, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_ServoLabel, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_ServoLabel, 56);
    lv_obj_set_y(ui_ServoLabel, 52);
    lv_label_set_text(ui_ServoLabel, "Servos");

    ui_ModelButton = lv_btn_create(ui_Menu);
    lv_obj_set_width(ui_ModelButton, 276);
    lv_obj_set_height(ui_ModelButton, 36);
    lv_obj_set_x(ui_ModelButton, 42);
    lv_obj_set_y(ui_ModelButton, 82);
    lv_obj_add_flag(ui_ModelButton, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_ModelButton, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_ModelButton, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_ModelButton, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_ModelLabel = lv_label_create(ui_Menu);
    lv_obj_set_width(ui_ModelLabel, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_ModelLabel, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_ModelLabel, 56);
    lv_obj_set_y(ui_ModelLabel, 92);
    lv_label_set_text(ui_ModelLabel, "Model");

    ui_Button1 = lv_btn_create(ui_Menu);
    lv_obj_set_width(ui_Button1, 276);
    lv_obj_set_height(ui_Button1, 36);
    lv_obj_set_x(ui_Button1, 42);
    lv_obj_set_y(ui_Button1, 122);
    lv_obj_add_flag(ui_Button1, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_Button1, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_Button1, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Button1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label1 = lv_label_create(ui_Menu);
    lv_obj_set_width(ui_Label1, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label1, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label1, 56);
    lv_obj_set_y(ui_Label1, 92);
    lv_label_set_text(ui_Label1, "Model");

    ui_Button2 = lv_btn_create(ui_Menu);
    lv_obj_set_width(ui_Button2, 276);
    lv_obj_set_height(ui_Button2, 36);
    lv_obj_set_x(ui_Button2, 42);
    lv_obj_set_y(ui_Button2, 162);
    lv_obj_add_flag(ui_Button2, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_Button2, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_Button2, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Button2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label2 = lv_label_create(ui_Menu);
    lv_obj_set_width(ui_Label2, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label2, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label2, 56);
    lv_obj_set_y(ui_Label2, 92);
    lv_label_set_text(ui_Label2, "Model");

    ui_Button3 = lv_btn_create(ui_Menu);
    lv_obj_set_width(ui_Button3, 276);
    lv_obj_set_height(ui_Button3, 36);
    lv_obj_set_x(ui_Button3, 42);
    lv_obj_set_y(ui_Button3, 202);
    lv_obj_add_flag(ui_Button3, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_Button3, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_Button3, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Button3, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label3 = lv_label_create(ui_Menu);
    lv_obj_set_width(ui_Label3, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label3, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label3, 56);
    lv_obj_set_y(ui_Label3, 92);
    lv_label_set_text(ui_Label3, "Model");

    ui_PageUpButton = lv_btn_create(ui_Menu);
    lv_obj_set_width(ui_PageUpButton, 36);
    lv_obj_set_height(ui_PageUpButton, 96);
    lv_obj_set_x(ui_PageUpButton, 2);
    lv_obj_set_y(ui_PageUpButton, 42);
    lv_obj_add_flag(ui_PageUpButton, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_PageUpButton, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_PageDownButton = lv_btn_create(ui_Menu);
    lv_obj_set_width(ui_PageDownButton, 36);
    lv_obj_set_height(ui_PageDownButton, 96);
    lv_obj_set_x(ui_PageDownButton, 2);
    lv_obj_set_y(ui_PageDownButton, 142);
    lv_obj_add_flag(ui_PageDownButton, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_PageDownButton, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_UpLabel = lv_label_create(ui_Menu);
    lv_obj_set_width(ui_UpLabel, 36);
    lv_obj_set_height(ui_UpLabel, 16);
    lv_obj_set_x(ui_UpLabel, 2);
    lv_obj_set_y(ui_UpLabel, 81);
    lv_label_set_text(ui_UpLabel, "Up");
    lv_obj_set_style_text_color(ui_UpLabel, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_UpLabel, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_UpLabel, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_DownLabel = lv_label_create(ui_Menu);
    lv_obj_set_width(ui_DownLabel, 36);
    lv_obj_set_height(ui_DownLabel, 16);
    lv_obj_set_x(ui_DownLabel, 2);
    lv_obj_set_y(ui_DownLabel, 181);
    lv_label_set_text(ui_DownLabel, "Down");
    lv_obj_set_style_text_color(ui_DownLabel, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_DownLabel, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_DownLabel, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_add_event_cb(ui_ExitButton, ui_event_ExitButton, LV_EVENT_ALL, NULL);

}