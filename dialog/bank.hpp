class Life_atm_management {
    idd = 2700;
  name= "life_atm_menu";
    movingEnable = 0;
    enableSimulation = 1;

  class ControlsBackground
    {
        class Life_RscTitleBackground : Life_RscText
        {
            idc = -1;
            x = safeZoneX + safeZoneW * 0.3625;
            y = safeZoneY + safeZoneH * 0.38425926;
            w = safeZoneW * 0.29114584;
            h = safeZoneH * 0.02222223;
            colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])","(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])","(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])","(profilenamespace getvariable ['GUI_BCG_RGB_A',0.7])"};

        };
        class MainBackground : Life_RscText
        {
            idc = -1;
            x = safeZoneX + safeZoneW * 0.361875;
            y = safeZoneY + safeZoneH * 0.41;
            w = safeZoneW * 0.29125;
            h = safeZoneH * 0.16333334;
            colorBackground[] = {0,0,0,0.7};

        };

    };
    class Controls
    {
        class CashTitle : Life_RscStructuredText
        {
            idc = 2701;
            x = safeZoneX + safeZoneW * 0.36666667;
            y = safeZoneY + safeZoneH * 0.4175926;
            w = safeZoneW * 0.17447917;
            h = safeZoneH * 0.04907408;
            text = "";
            colorBackground[] = {1,1,1,0};
            class Attributes
            {
                font = "RobotoCondensed";
                color = "#ffffff";
                align = "left";

            };

        };
        class Title : Life_RscTitle
        {
            idc = -1;
            x = safeZoneX + safeZoneW * 0.3640625;
            y = safeZoneY + safeZoneH * 0.38240741;
            w = safeZoneW * 0.28697917;
            h = safeZoneH * 0.02222223;
            text = "$STR_ATM_Title";
            colorBackground[] = {0,0,0,0};

        };
        class WithdrawButton : Life_RscButtonMenu
        {
            idc = -1;
            x = safeZoneX + safeZoneW * 0.365625;
            y = safeZoneY + safeZoneH * 0.54351852;
            w = safeZoneW * 0.06197917;
            h = safeZoneH * 0.02222223;
            text = "$STR_ATM_Withdraw";
            colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])","(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])","(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])",0.5};
            onButtonClick = "[] call life_fnc_bankWithdraw";
            class HitZone
            {
                top = 0.0;
                right = 0.0;
                bottom = 0.0;
                left = 0.0;

            };
            class ShortcutPos
            {
                top = 0.005;
                left = (6.25 * (((safezoneW / safezoneH) min 1.2) / 40)) - 0.0225 - 0.005;
                w = 0.0225;
                h = 0.03;

            };
            class TextPos
            {
                top = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) - (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)) / 2;
                right = 0.005;
                bottom = 0.0;
                left = 0.25 * (((safezoneW / safezoneH) min 1.2) / 40);

            };

        };
        class DepositButton : Life_RscButtonMenu
        {
            idc = -1;
            x = safeZoneX + safeZoneW * 0.4296875;
            y = safeZoneY + safeZoneH * 0.54351852;
            w = safeZoneW * 0.06197917;
            h = safeZoneH * 0.02222223;
            text = "$STR_ATM_Deposit";
            colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])","(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])","(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])",0.5};
            onButtonClick = "[0] call life_fnc_bankDeposit";
            class HitZone
            {
                top = 0.0;
                right = 0.0;
                bottom = 0.0;
                left = 0.0;

            };
            class ShortcutPos
            {
                top = 0.005;
                left = (6.25 * (((safezoneW / safezoneH) min 1.2) / 40)) - 0.0225 - 0.005;
                w = 0.0225;
                h = 0.03;

            };
            class TextPos
            {
                top = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) - (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)) / 2;
                right = 0.005;
                bottom = 0.0;
                left = 0.25 * (((safezoneW / safezoneH) min 1.2) / 40);

            };

        };
        class moneyEdit : Life_RscEdit
        {
            idc = 2702;
            x = safeZoneX + safeZoneW * 0.36822917;
            y = safeZoneY + safeZoneH * 0.50370371;
            w = safeZoneW * 0.27760417;
            h = safeZoneH * 0.01851852;
            text = "1";
            colorSelection[] = {1,0,0,1};
            sizeEx = 0.030;

        };
        class PlayerList : Life_RscCombo
        {
            idc = 2703;
            x = safeZoneX + safeZoneW * 0.36822917;
            y = safeZoneY + safeZoneH * 0.47777778;
            w = safeZoneW * 0.27760417;
            h = safeZoneH * 0.01666667;
            class ComboScrollBar
            {
                color[] = {1,1,1,1};
                thumb = "\A3\ui_f\data\gui\cfg\scrollbar\thumb_ca.paa";
                arrowFull = "\A3\ui_f\data\gui\cfg\scrollbar\arrowFull_ca.paa";
                arrowEmpty = "\A3\ui_f\data\gui\cfg\scrollbar\arrowEmpty_ca.paa";
                border = "\A3\ui_f\data\gui\cfg\scrollbar\border_ca.paa";

            };

        };
        class TransferButton : Life_RscButtonMenu
        {
            idc = -1;
            x = safeZoneX + safeZoneW * 0.55833334;
            y = safeZoneY + safeZoneH * 0.54351852;
            w = safeZoneW * 0.06197917;
            h = safeZoneH * 0.02222223;
            text = "$STR_ATM_Transfer";
            colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])","(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])","(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])",0.5};
            onButtonClick = "[] call life_fnc_bankTransfer";
            class HitZone
            {
                top = 0.0;
                right = 0.0;
                bottom = 0.0;
                left = 0.0;

            };
            class ShortcutPos
            {
                top = 0.005;
                left = (6.25 * (((safezoneW / safezoneH) min 1.2) / 40)) - 0.0225 - 0.005;
                w = 0.0225;
                h = 0.03;

            };
            class TextPos
            {
                top = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) - (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)) / 2;
                right = 0.005;
                bottom = 0.0;
                left = 0.25 * (((safezoneW / safezoneH) min 1.2) / 40);

            };

        };
        class CloseButtonKey : Life_RscButtonMenu
        {
            idc = -1;
            x = safeZoneX + safeZoneW * 0.36197917;
            y = safeZoneY + safeZoneH * 0.57592593;
            w = safeZoneW * 0.06458334;
            h = safeZoneH * 0.02222223;
            text = "$STR_Global_Close";
            onButtonClick = "closeDialog 0;";
            class HitZone
            {
                top = 0.0;
                right = 0.0;
                bottom = 0.0;
                left = 0.0;

            };
            class ShortcutPos
            {
                top = 0.005;
                left = (6.25 * (((safezoneW / safezoneH) min 1.2) / 40)) - 0.0225 - 0.005;
                w = 0.0225;
                h = 0.03;

            };
            class TextPos
            {
                top = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) - (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)) / 2;
                right = 0.005;
                bottom = 0.0;
                left = 0.25 * (((safezoneW / safezoneH) min 1.2) / 40);

            };

        };
        class DepositAllButton : Life_RscButtonMenu
        {
            idc = -1;
            x = safeZoneX + safeZoneW * 0.49375;
            y = safeZoneY + safeZoneH * 0.54351852;
            w = safeZoneW * 0.06197917;
            h = safeZoneH * 0.02222223;
            text = "$STR_ATM_Deposit_All";
            colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])","(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])","(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])",0.5};
            onButtonClick = "[1] call life_fnc_bankDeposit";
            class HitZone
            {
                top = 0.0;
                right = 0.0;
                bottom = 0.0;
                left = 0.0;

            };
            class ShortcutPos
            {
                top = 0.005;
                left = (6.25 * (((safezoneW / safezoneH) min 1.2) / 40)) - 0.0225 - 0.005;
                w = 0.0225;
                h = 0.03;

            };
            class TextPos
            {
                top = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) - (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)) / 2;
                right = 0.005;
                bottom = 0.0;
                left = 0.25 * (((safezoneW / safezoneH) min 1.2) / 40);

            };

        };

    };

};
