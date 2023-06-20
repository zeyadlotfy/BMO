#pragma once
#include<iostream>
#include<vector>
#include <map>
#include<set>
#include<queue>
#include<algorithm>
namespace BMO {
    using namespace std;
    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Collections;
    using namespace System::Windows::Forms;
    using namespace System::Data;
    using namespace System::Drawing;
    using namespace System::Media;
	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	protected:
    private: System::Windows::Forms::Button^ edge10_20;
    private: System::Windows::Forms::Button^ edge10_11;
    private: System::Windows::Forms::Button^ cell10;
	private: System::Windows::Forms::Button^ edge0_10;
	private: System::Windows::Forms::Button^ edge0_1;
	private: System::Windows::Forms::Button^ cell0;
    private: System::Windows::Forms::Button^ edge19_29;
    private: System::Windows::Forms::Button^ edge17_27;
    private: System::Windows::Forms::Button^ edge13_23;
    private: System::Windows::Forms::Button^ edge15_25;
    private: System::Windows::Forms::Button^ edge11_21;
    private: System::Windows::Forms::Button^ edge18_28;
    private: System::Windows::Forms::Button^ edge16_26;
    private: System::Windows::Forms::Button^ edge12_22;
    private: System::Windows::Forms::Button^ edge14_24;
    private: System::Windows::Forms::Button^ edge17_18;
    private: System::Windows::Forms::Button^ edge13_14;
    private: System::Windows::Forms::Button^ edge15_16;
    private: System::Windows::Forms::Button^ edge11_12;
    private: System::Windows::Forms::Button^ edge18_19;
    private: System::Windows::Forms::Button^ edge16_17;
    private: System::Windows::Forms::Button^ edge12_13;
    private: System::Windows::Forms::Button^ edge14_15;
    private: System::Windows::Forms::Button^ cell19;
    private: System::Windows::Forms::Button^ cell17;
    private: System::Windows::Forms::Button^ cell13;
    private: System::Windows::Forms::Button^ cell15;
    private: System::Windows::Forms::Button^ cell18;
    private: System::Windows::Forms::Button^ cell11;
    private: System::Windows::Forms::Button^ cell16;
    private: System::Windows::Forms::Button^ cell12;
    private: System::Windows::Forms::Button^ cell14;
    private: System::Windows::Forms::Button^ edge9_19;
    private: System::Windows::Forms::Button^ edge7_17;
    private: System::Windows::Forms::Button^ edge3_13;
    private: System::Windows::Forms::Button^ edge5_15;
    private: System::Windows::Forms::Button^ edge8_18;
    private: System::Windows::Forms::Button^ edge1_11;
    private: System::Windows::Forms::Button^ edge6_16;
    private: System::Windows::Forms::Button^ edge2_12;
    private: System::Windows::Forms::Button^ edge4_14;
    private: System::Windows::Forms::Button^ edge7_8;
    private: System::Windows::Forms::Button^ edge3_4;
    private: System::Windows::Forms::Button^ edge5_6;
    private: System::Windows::Forms::Button^ edge8_9;
    private: System::Windows::Forms::Button^ edge1_2;
    private: System::Windows::Forms::Button^ edge6_7;
    private: System::Windows::Forms::Button^ edge2_3;
    private: System::Windows::Forms::Button^ edge4_5;
    private: System::Windows::Forms::Button^ cell9;
    private: System::Windows::Forms::Button^ cell8;
    private: System::Windows::Forms::Button^ cell7;
    private: System::Windows::Forms::Button^ cell6;
    private: System::Windows::Forms::Button^ cell3;
    private: System::Windows::Forms::Button^ cell5;
    private: System::Windows::Forms::Button^ cell2;
    private: System::Windows::Forms::Button^ cell4;
    private: System::Windows::Forms::Button^ cell1;
    private: System::Windows::Forms::Button^ edge79_89;
    private: System::Windows::Forms::Button^ edge39_49;
    private: System::Windows::Forms::Button^ edge59_69;
    private: System::Windows::Forms::Button^ edge77_87;
    private: System::Windows::Forms::Button^ edge37_47;
    private: System::Windows::Forms::Button^ edge57_67;
    private: System::Windows::Forms::Button^ edge73_83;
    private: System::Windows::Forms::Button^ edge33_43;
    private: System::Windows::Forms::Button^ edge53_63;
    private: System::Windows::Forms::Button^ edge75_85;
    private: System::Windows::Forms::Button^ edge35_45;
    private: System::Windows::Forms::Button^ edge55_65;
    private: System::Windows::Forms::Button^ edge71_81;
    private: System::Windows::Forms::Button^ edge31_41;
    private: System::Windows::Forms::Button^ edge51_61;
    private: System::Windows::Forms::Button^ edge78_88;
    private: System::Windows::Forms::Button^ edge38_48;
    private: System::Windows::Forms::Button^ edge58_68;
    private: System::Windows::Forms::Button^ edge76_86;
    private: System::Windows::Forms::Button^ edge36_46;
    private: System::Windows::Forms::Button^ edge56_66;
    private: System::Windows::Forms::Button^ edge72_82;
    private: System::Windows::Forms::Button^ edge32_42;
    private: System::Windows::Forms::Button^ edge52_62;
    private: System::Windows::Forms::Button^ edge74_84;
    private: System::Windows::Forms::Button^ edge34_44;
    private: System::Windows::Forms::Button^ edge54_64;
    private: System::Windows::Forms::Button^ edge70_80;
    private: System::Windows::Forms::Button^ edge30_40;
    private: System::Windows::Forms::Button^ edge50_60;
    private: System::Windows::Forms::Button^ edge97_98;
    private: System::Windows::Forms::Button^ edge77_78;
    private: System::Windows::Forms::Button^ edge37_38;
    private: System::Windows::Forms::Button^ edge57_58;
    private: System::Windows::Forms::Button^ edge93_94;
    private: System::Windows::Forms::Button^ edge73_74;
    private: System::Windows::Forms::Button^ edge33_34;
    private: System::Windows::Forms::Button^ edge53_54;
    private: System::Windows::Forms::Button^ edge95_96;
    private: System::Windows::Forms::Button^ edge75_76;
    private: System::Windows::Forms::Button^ edge35_36;
    private: System::Windows::Forms::Button^ edge55_56;
    private: System::Windows::Forms::Button^ edge91_92;
    private: System::Windows::Forms::Button^ edge71_72;
    private: System::Windows::Forms::Button^ edge31_32;
    private: System::Windows::Forms::Button^ edge51_52;
    private: System::Windows::Forms::Button^ edge98_99;
    private: System::Windows::Forms::Button^ edge78_79;
    private: System::Windows::Forms::Button^ edge38_39;
    private: System::Windows::Forms::Button^ edge58_59;
    private: System::Windows::Forms::Button^ edge96_97;
    private: System::Windows::Forms::Button^ edge76_77;
    private: System::Windows::Forms::Button^ edge36_37;
    private: System::Windows::Forms::Button^ edge56_57; 
    private: System::Windows::Forms::Button^ edge92_93;
    private: System::Windows::Forms::Button^ edge72_73;
    private: System::Windows::Forms::Button^ edge32_33;
    private: System::Windows::Forms::Button^ edge52_53;
    private: System::Windows::Forms::Button^ edge94_95;
    private: System::Windows::Forms::Button^ edge74_75;
    private: System::Windows::Forms::Button^ edge34_35;
    private: System::Windows::Forms::Button^ edge54_55;
    private: System::Windows::Forms::Button^ edge90_91;
    private: System::Windows::Forms::Button^ edge70_71;
    private: System::Windows::Forms::Button^ edge30_31;
    private: System::Windows::Forms::Button^ edge50_51;
    private: System::Windows::Forms::Button^ cell99;
    private: System::Windows::Forms::Button^ cell79;
    private: System::Windows::Forms::Button^ cell39;
    private: System::Windows::Forms::Button^ cell97;
    private: System::Windows::Forms::Button^ cell77;
    private: System::Windows::Forms::Button^ cell37;
    private: System::Windows::Forms::Button^ cell59;
    private: System::Windows::Forms::Button^ cell93;
    private: System::Windows::Forms::Button^ cell73;
    private: System::Windows::Forms::Button^ cell33;
    private: System::Windows::Forms::Button^ cell57;
    private: System::Windows::Forms::Button^ cell95;
    private: System::Windows::Forms::Button^ cell75;
    private: System::Windows::Forms::Button^ cell35;
    private: System::Windows::Forms::Button^ cell53;
    private: System::Windows::Forms::Button^ cell98;
    private: System::Windows::Forms::Button^ cell78;
    private: System::Windows::Forms::Button^ cell38;
    private: System::Windows::Forms::Button^ cell55;
    private: System::Windows::Forms::Button^ cell91;
    private: System::Windows::Forms::Button^ cell71;
    private: System::Windows::Forms::Button^ cell31;
    private: System::Windows::Forms::Button^ cell58;
    private: System::Windows::Forms::Button^ cell96;
    private: System::Windows::Forms::Button^ cell76;
    private: System::Windows::Forms::Button^ cell36;
    private: System::Windows::Forms::Button^ cell51;
    private: System::Windows::Forms::Button^ cell92;
    private: System::Windows::Forms::Button^ cell72;
    private: System::Windows::Forms::Button^ cell32;
    private: System::Windows::Forms::Button^ cell56;
    private: System::Windows::Forms::Button^ cell94;
    private: System::Windows::Forms::Button^ cell74;
    private: System::Windows::Forms::Button^ cell34;
    private: System::Windows::Forms::Button^ cell52;
    private: System::Windows::Forms::Button^ edge89_99;
    private: System::Windows::Forms::Button^ edge69_79;
    private: System::Windows::Forms::Button^ edge29_39;
    private: System::Windows::Forms::Button^ cell54;
    private: System::Windows::Forms::Button^ cell90;
    private: System::Windows::Forms::Button^ cell70;
    private: System::Windows::Forms::Button^ cell30;
    private: System::Windows::Forms::Button^ edge49_59;
    private: System::Windows::Forms::Button^ edge87_97;
    private: System::Windows::Forms::Button^ edge67_77;
    private: System::Windows::Forms::Button^ edge27_37;
    private: System::Windows::Forms::Button^ cell50;
    private: System::Windows::Forms::Button^ edge83_93;
    private: System::Windows::Forms::Button^ edge63_73;
    private: System::Windows::Forms::Button^ edge23_33;
    private: System::Windows::Forms::Button^ edge47_57;
    private: System::Windows::Forms::Button^ edge85_95;
    private: System::Windows::Forms::Button^ edge65_75;
    private: System::Windows::Forms::Button^ edge25_35;
    private: System::Windows::Forms::Button^ edge43_53;
    private: System::Windows::Forms::Button^ edge88_98;
    private: System::Windows::Forms::Button^ edge68_78;
    private: System::Windows::Forms::Button^ edge28_38;
private: System::Windows::Forms::Button^ edge45_55;
private: System::Windows::Forms::Button^ edge81_91;
private: System::Windows::Forms::Button^ edge61_71;
private: System::Windows::Forms::Button^ edge21_31;
private: System::Windows::Forms::Button^ edge48_58;
private: System::Windows::Forms::Button^ edge86_96;
private: System::Windows::Forms::Button^ edge66_76;
private: System::Windows::Forms::Button^ edge26_36;
private: System::Windows::Forms::Button^ edge41_51;
private: System::Windows::Forms::Button^ edge82_92;
private: System::Windows::Forms::Button^ edge62_72;
private: System::Windows::Forms::Button^ edge22_32;
private: System::Windows::Forms::Button^ edge46_56;
private: System::Windows::Forms::Button^ edge84_94;
private: System::Windows::Forms::Button^ edge64_74;
private: System::Windows::Forms::Button^ edge24_34;
private: System::Windows::Forms::Button^ edge42_52;
private: System::Windows::Forms::Button^ edge44_54;
private: System::Windows::Forms::Button^ edge80_90;
private: System::Windows::Forms::Button^ edge60_70;
private: System::Windows::Forms::Button^ edge20_30;
private: System::Windows::Forms::Button^ edge87_88;
private: System::Windows::Forms::Button^ edge67_68;
private: System::Windows::Forms::Button^ edge27_28;
private: System::Windows::Forms::Button^ edge40_50;
private: System::Windows::Forms::Button^ edge83_84;
private: System::Windows::Forms::Button^ edge63_64;
private: System::Windows::Forms::Button^ edge23_24;
private: System::Windows::Forms::Button^ edge47_48;
private: System::Windows::Forms::Button^ edge85_86;
private: System::Windows::Forms::Button^ edge65_66;
private: System::Windows::Forms::Button^ edge25_26;
private: System::Windows::Forms::Button^ edge43_44;
private: System::Windows::Forms::Button^ edge88_89;
private: System::Windows::Forms::Button^ edge68_69;
private: System::Windows::Forms::Button^ edge28_29;
private: System::Windows::Forms::Button^ edge45_46;
private: System::Windows::Forms::Button^ edge81_82;
private: System::Windows::Forms::Button^ edge61_62;
private: System::Windows::Forms::Button^ edge21_22;
private: System::Windows::Forms::Button^ edge48_49;
private: System::Windows::Forms::Button^ edge86_87;
private: System::Windows::Forms::Button^ edge66_67;
private: System::Windows::Forms::Button^ edge26_27;
private: System::Windows::Forms::Button^ edge41_42;
private: System::Windows::Forms::Button^ edge82_83;
private: System::Windows::Forms::Button^ edge62_63;
private: System::Windows::Forms::Button^ edge22_23;
private: System::Windows::Forms::Button^ edge46_47;
private: System::Windows::Forms::Button^ edge84_85;
private: System::Windows::Forms::Button^ edge64_65;
private: System::Windows::Forms::Button^ edge24_25;
private: System::Windows::Forms::Button^ edge42_43;
private: System::Windows::Forms::Button^ cell89;
private: System::Windows::Forms::Button^ cell69;
private: System::Windows::Forms::Button^ cell29;
private: System::Windows::Forms::Button^ edge44_45;
private: System::Windows::Forms::Button^ edge80_81;
private: System::Windows::Forms::Button^ edge60_61;
private: System::Windows::Forms::Button^ edge20_21;
private: System::Windows::Forms::Button^ cell49;
private: System::Windows::Forms::Button^ cell88;
private: System::Windows::Forms::Button^ cell68;
private: System::Windows::Forms::Button^ edge40_41;
private: System::Windows::Forms::Button^ cell28;
private: System::Windows::Forms::Button^ cell87;
private: System::Windows::Forms::Button^ cell67;
private: System::Windows::Forms::Button^ cell48;
private: System::Windows::Forms::Button^ cell27;
private: System::Windows::Forms::Button^ cell86;
private: System::Windows::Forms::Button^ cell66;
private: System::Windows::Forms::Button^ cell47;
private: System::Windows::Forms::Button^ cell26;
private: System::Windows::Forms::Button^ cell83;
private: System::Windows::Forms::Button^ cell63;
private: System::Windows::Forms::Button^ cell46;
private: System::Windows::Forms::Button^ cell23;
private: System::Windows::Forms::Button^ cell85;
private: System::Windows::Forms::Button^ cell65;
private: System::Windows::Forms::Button^ cell43;
private: System::Windows::Forms::Button^ cell82;
private: System::Windows::Forms::Button^ cell25;
private: System::Windows::Forms::Button^ cell62;
private: System::Windows::Forms::Button^ cell45;
private: System::Windows::Forms::Button^ cell84;
private: System::Windows::Forms::Button^ cell22;
private: System::Windows::Forms::Button^ cell64;
private: System::Windows::Forms::Button^ cell42;
private: System::Windows::Forms::Button^ cell81;
private: System::Windows::Forms::Button^ cell24;
private: System::Windows::Forms::Button^ cell61;
private: System::Windows::Forms::Button^ cell44;
private: System::Windows::Forms::Button^ cell80;
private: System::Windows::Forms::Button^ cell21;
private: System::Windows::Forms::Button^ cell60;
private: System::Windows::Forms::Button^ cell41;
private: System::Windows::Forms::Button^ cell20;
private: System::Windows::Forms::Button^ cell40;
private: System::Windows::Forms::TextBox^ textBox1;
private: System::Windows::Forms::TextBox^ textBox2;
private: System::Windows::Forms::Button^ go;
private: System::Windows::Forms::Label^ label1;
    private: System::Windows::Forms::Label^ label2;
    private: System::Windows::Forms::Label^ label3;
    private: System::Windows::Forms::Panel^ panel2;
	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
            System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
            this->panel1 = (gcnew System::Windows::Forms::Panel());
            this->edge79_89 = (gcnew System::Windows::Forms::Button());
            this->edge39_49 = (gcnew System::Windows::Forms::Button());
            this->edge59_69 = (gcnew System::Windows::Forms::Button());
            this->edge19_29 = (gcnew System::Windows::Forms::Button());
            this->edge77_87 = (gcnew System::Windows::Forms::Button());
            this->edge37_47 = (gcnew System::Windows::Forms::Button());
            this->edge57_67 = (gcnew System::Windows::Forms::Button());
            this->edge17_27 = (gcnew System::Windows::Forms::Button());
            this->edge73_83 = (gcnew System::Windows::Forms::Button());
            this->edge33_43 = (gcnew System::Windows::Forms::Button());
            this->edge53_63 = (gcnew System::Windows::Forms::Button());
            this->edge13_23 = (gcnew System::Windows::Forms::Button());
            this->edge75_85 = (gcnew System::Windows::Forms::Button());
            this->edge35_45 = (gcnew System::Windows::Forms::Button());
            this->edge55_65 = (gcnew System::Windows::Forms::Button());
            this->edge15_25 = (gcnew System::Windows::Forms::Button());
            this->edge71_81 = (gcnew System::Windows::Forms::Button());
            this->edge31_41 = (gcnew System::Windows::Forms::Button());
            this->edge51_61 = (gcnew System::Windows::Forms::Button());
            this->edge11_21 = (gcnew System::Windows::Forms::Button());
            this->edge78_88 = (gcnew System::Windows::Forms::Button());
            this->edge38_48 = (gcnew System::Windows::Forms::Button());
            this->edge58_68 = (gcnew System::Windows::Forms::Button());
            this->edge18_28 = (gcnew System::Windows::Forms::Button());
            this->edge76_86 = (gcnew System::Windows::Forms::Button());
            this->edge36_46 = (gcnew System::Windows::Forms::Button());
            this->edge56_66 = (gcnew System::Windows::Forms::Button());
            this->edge16_26 = (gcnew System::Windows::Forms::Button());
            this->edge72_82 = (gcnew System::Windows::Forms::Button());
            this->edge32_42 = (gcnew System::Windows::Forms::Button());
            this->edge52_62 = (gcnew System::Windows::Forms::Button());
            this->edge12_22 = (gcnew System::Windows::Forms::Button());
            this->edge74_84 = (gcnew System::Windows::Forms::Button());
            this->edge34_44 = (gcnew System::Windows::Forms::Button());
            this->edge54_64 = (gcnew System::Windows::Forms::Button());
            this->edge14_24 = (gcnew System::Windows::Forms::Button());
            this->edge70_80 = (gcnew System::Windows::Forms::Button());
            this->edge30_40 = (gcnew System::Windows::Forms::Button());
            this->edge50_60 = (gcnew System::Windows::Forms::Button());
            this->edge10_20 = (gcnew System::Windows::Forms::Button());
            this->edge97_98 = (gcnew System::Windows::Forms::Button());
            this->edge77_78 = (gcnew System::Windows::Forms::Button());
            this->edge37_38 = (gcnew System::Windows::Forms::Button());
            this->edge57_58 = (gcnew System::Windows::Forms::Button());
            this->edge17_18 = (gcnew System::Windows::Forms::Button());
            this->edge93_94 = (gcnew System::Windows::Forms::Button());
            this->edge73_74 = (gcnew System::Windows::Forms::Button());
            this->edge33_34 = (gcnew System::Windows::Forms::Button());
            this->edge53_54 = (gcnew System::Windows::Forms::Button());
            this->edge13_14 = (gcnew System::Windows::Forms::Button());
            this->edge95_96 = (gcnew System::Windows::Forms::Button());
            this->edge75_76 = (gcnew System::Windows::Forms::Button());
            this->edge35_36 = (gcnew System::Windows::Forms::Button());
            this->edge55_56 = (gcnew System::Windows::Forms::Button());
            this->edge15_16 = (gcnew System::Windows::Forms::Button());
            this->edge91_92 = (gcnew System::Windows::Forms::Button());
            this->edge71_72 = (gcnew System::Windows::Forms::Button());
            this->edge31_32 = (gcnew System::Windows::Forms::Button());
            this->edge51_52 = (gcnew System::Windows::Forms::Button());
            this->edge11_12 = (gcnew System::Windows::Forms::Button());
            this->edge98_99 = (gcnew System::Windows::Forms::Button());
            this->edge78_79 = (gcnew System::Windows::Forms::Button());
            this->edge38_39 = (gcnew System::Windows::Forms::Button());
            this->edge58_59 = (gcnew System::Windows::Forms::Button());
            this->edge18_19 = (gcnew System::Windows::Forms::Button());
            this->edge96_97 = (gcnew System::Windows::Forms::Button());
            this->edge76_77 = (gcnew System::Windows::Forms::Button());
            this->edge36_37 = (gcnew System::Windows::Forms::Button());
            this->edge56_57 = (gcnew System::Windows::Forms::Button());
            this->edge16_17 = (gcnew System::Windows::Forms::Button());
            this->edge92_93 = (gcnew System::Windows::Forms::Button());
            this->edge72_73 = (gcnew System::Windows::Forms::Button());
            this->edge32_33 = (gcnew System::Windows::Forms::Button());
            this->edge52_53 = (gcnew System::Windows::Forms::Button());
            this->edge12_13 = (gcnew System::Windows::Forms::Button());
            this->edge94_95 = (gcnew System::Windows::Forms::Button());
            this->edge74_75 = (gcnew System::Windows::Forms::Button());
            this->edge34_35 = (gcnew System::Windows::Forms::Button());
            this->edge54_55 = (gcnew System::Windows::Forms::Button());
            this->edge14_15 = (gcnew System::Windows::Forms::Button());
            this->edge90_91 = (gcnew System::Windows::Forms::Button());
            this->edge70_71 = (gcnew System::Windows::Forms::Button());
            this->edge30_31 = (gcnew System::Windows::Forms::Button());
            this->edge50_51 = (gcnew System::Windows::Forms::Button());
            this->edge10_11 = (gcnew System::Windows::Forms::Button());
            this->cell99 = (gcnew System::Windows::Forms::Button());
            this->cell79 = (gcnew System::Windows::Forms::Button());
            this->cell39 = (gcnew System::Windows::Forms::Button());
            this->cell97 = (gcnew System::Windows::Forms::Button());
            this->cell77 = (gcnew System::Windows::Forms::Button());
            this->cell37 = (gcnew System::Windows::Forms::Button());
            this->cell59 = (gcnew System::Windows::Forms::Button());
            this->cell19 = (gcnew System::Windows::Forms::Button());
            this->cell93 = (gcnew System::Windows::Forms::Button());
            this->cell73 = (gcnew System::Windows::Forms::Button());
            this->cell33 = (gcnew System::Windows::Forms::Button());
            this->cell57 = (gcnew System::Windows::Forms::Button());
            this->cell17 = (gcnew System::Windows::Forms::Button());
            this->cell95 = (gcnew System::Windows::Forms::Button());
            this->cell75 = (gcnew System::Windows::Forms::Button());
            this->cell35 = (gcnew System::Windows::Forms::Button());
            this->cell53 = (gcnew System::Windows::Forms::Button());
            this->cell13 = (gcnew System::Windows::Forms::Button());
            this->cell98 = (gcnew System::Windows::Forms::Button());
            this->cell78 = (gcnew System::Windows::Forms::Button());
            this->cell38 = (gcnew System::Windows::Forms::Button());
            this->cell55 = (gcnew System::Windows::Forms::Button());
            this->cell15 = (gcnew System::Windows::Forms::Button());
            this->cell91 = (gcnew System::Windows::Forms::Button());
            this->cell71 = (gcnew System::Windows::Forms::Button());
            this->cell31 = (gcnew System::Windows::Forms::Button());
            this->cell58 = (gcnew System::Windows::Forms::Button());
            this->cell18 = (gcnew System::Windows::Forms::Button());
            this->cell96 = (gcnew System::Windows::Forms::Button());
            this->cell76 = (gcnew System::Windows::Forms::Button());
            this->cell36 = (gcnew System::Windows::Forms::Button());
            this->cell51 = (gcnew System::Windows::Forms::Button());
            this->cell11 = (gcnew System::Windows::Forms::Button());
            this->cell92 = (gcnew System::Windows::Forms::Button());
            this->cell72 = (gcnew System::Windows::Forms::Button());
            this->cell32 = (gcnew System::Windows::Forms::Button());
            this->cell56 = (gcnew System::Windows::Forms::Button());
            this->cell16 = (gcnew System::Windows::Forms::Button());
            this->cell94 = (gcnew System::Windows::Forms::Button());
            this->cell74 = (gcnew System::Windows::Forms::Button());
            this->cell34 = (gcnew System::Windows::Forms::Button());
            this->cell52 = (gcnew System::Windows::Forms::Button());
            this->cell12 = (gcnew System::Windows::Forms::Button());
            this->edge89_99 = (gcnew System::Windows::Forms::Button());
            this->edge69_79 = (gcnew System::Windows::Forms::Button());
            this->edge29_39 = (gcnew System::Windows::Forms::Button());
            this->cell54 = (gcnew System::Windows::Forms::Button());
            this->cell14 = (gcnew System::Windows::Forms::Button());
            this->cell90 = (gcnew System::Windows::Forms::Button());
            this->cell70 = (gcnew System::Windows::Forms::Button());
            this->cell30 = (gcnew System::Windows::Forms::Button());
            this->edge49_59 = (gcnew System::Windows::Forms::Button());
            this->edge9_19 = (gcnew System::Windows::Forms::Button());
            this->edge87_97 = (gcnew System::Windows::Forms::Button());
            this->edge67_77 = (gcnew System::Windows::Forms::Button());
            this->edge27_37 = (gcnew System::Windows::Forms::Button());
            this->cell50 = (gcnew System::Windows::Forms::Button());
            this->cell10 = (gcnew System::Windows::Forms::Button());
            this->edge83_93 = (gcnew System::Windows::Forms::Button());
            this->edge63_73 = (gcnew System::Windows::Forms::Button());
            this->edge23_33 = (gcnew System::Windows::Forms::Button());
            this->edge47_57 = (gcnew System::Windows::Forms::Button());
            this->edge7_17 = (gcnew System::Windows::Forms::Button());
            this->edge85_95 = (gcnew System::Windows::Forms::Button());
            this->edge65_75 = (gcnew System::Windows::Forms::Button());
            this->edge25_35 = (gcnew System::Windows::Forms::Button());
            this->edge43_53 = (gcnew System::Windows::Forms::Button());
            this->edge3_13 = (gcnew System::Windows::Forms::Button());
            this->edge88_98 = (gcnew System::Windows::Forms::Button());
            this->edge68_78 = (gcnew System::Windows::Forms::Button());
            this->edge28_38 = (gcnew System::Windows::Forms::Button());
            this->edge45_55 = (gcnew System::Windows::Forms::Button());
            this->edge5_15 = (gcnew System::Windows::Forms::Button());
            this->edge81_91 = (gcnew System::Windows::Forms::Button());
            this->edge61_71 = (gcnew System::Windows::Forms::Button());
            this->edge21_31 = (gcnew System::Windows::Forms::Button());
            this->edge48_58 = (gcnew System::Windows::Forms::Button());
            this->edge8_18 = (gcnew System::Windows::Forms::Button());
            this->edge86_96 = (gcnew System::Windows::Forms::Button());
            this->edge66_76 = (gcnew System::Windows::Forms::Button());
            this->edge26_36 = (gcnew System::Windows::Forms::Button());
            this->edge41_51 = (gcnew System::Windows::Forms::Button());
            this->edge1_11 = (gcnew System::Windows::Forms::Button());
            this->edge82_92 = (gcnew System::Windows::Forms::Button());
            this->edge62_72 = (gcnew System::Windows::Forms::Button());
            this->edge22_32 = (gcnew System::Windows::Forms::Button());
            this->edge46_56 = (gcnew System::Windows::Forms::Button());
            this->edge6_16 = (gcnew System::Windows::Forms::Button());
            this->edge84_94 = (gcnew System::Windows::Forms::Button());
            this->edge64_74 = (gcnew System::Windows::Forms::Button());
            this->edge24_34 = (gcnew System::Windows::Forms::Button());
            this->edge42_52 = (gcnew System::Windows::Forms::Button());
            this->edge2_12 = (gcnew System::Windows::Forms::Button());
            this->edge44_54 = (gcnew System::Windows::Forms::Button());
            this->edge4_14 = (gcnew System::Windows::Forms::Button());
            this->edge80_90 = (gcnew System::Windows::Forms::Button());
            this->edge60_70 = (gcnew System::Windows::Forms::Button());
            this->edge20_30 = (gcnew System::Windows::Forms::Button());
            this->edge87_88 = (gcnew System::Windows::Forms::Button());
            this->edge67_68 = (gcnew System::Windows::Forms::Button());
            this->edge27_28 = (gcnew System::Windows::Forms::Button());
            this->edge40_50 = (gcnew System::Windows::Forms::Button());
            this->edge0_10 = (gcnew System::Windows::Forms::Button());
            this->edge83_84 = (gcnew System::Windows::Forms::Button());
            this->edge63_64 = (gcnew System::Windows::Forms::Button());
            this->edge23_24 = (gcnew System::Windows::Forms::Button());
            this->edge47_48 = (gcnew System::Windows::Forms::Button());
            this->edge7_8 = (gcnew System::Windows::Forms::Button());
            this->edge85_86 = (gcnew System::Windows::Forms::Button());
            this->edge65_66 = (gcnew System::Windows::Forms::Button());
            this->edge25_26 = (gcnew System::Windows::Forms::Button());
            this->edge43_44 = (gcnew System::Windows::Forms::Button());
            this->edge3_4 = (gcnew System::Windows::Forms::Button());
            this->edge88_89 = (gcnew System::Windows::Forms::Button());
            this->edge68_69 = (gcnew System::Windows::Forms::Button());
            this->edge28_29 = (gcnew System::Windows::Forms::Button());
            this->edge45_46 = (gcnew System::Windows::Forms::Button());
            this->edge5_6 = (gcnew System::Windows::Forms::Button());
            this->edge81_82 = (gcnew System::Windows::Forms::Button());
            this->edge61_62 = (gcnew System::Windows::Forms::Button());
            this->edge21_22 = (gcnew System::Windows::Forms::Button());
            this->edge48_49 = (gcnew System::Windows::Forms::Button());
            this->edge8_9 = (gcnew System::Windows::Forms::Button());
            this->edge86_87 = (gcnew System::Windows::Forms::Button());
            this->edge66_67 = (gcnew System::Windows::Forms::Button());
            this->edge26_27 = (gcnew System::Windows::Forms::Button());
            this->edge41_42 = (gcnew System::Windows::Forms::Button());
            this->edge1_2 = (gcnew System::Windows::Forms::Button());
            this->edge82_83 = (gcnew System::Windows::Forms::Button());
            this->edge62_63 = (gcnew System::Windows::Forms::Button());
            this->edge22_23 = (gcnew System::Windows::Forms::Button());
            this->edge46_47 = (gcnew System::Windows::Forms::Button());
            this->edge6_7 = (gcnew System::Windows::Forms::Button());
            this->edge84_85 = (gcnew System::Windows::Forms::Button());
            this->edge64_65 = (gcnew System::Windows::Forms::Button());
            this->edge24_25 = (gcnew System::Windows::Forms::Button());
            this->edge42_43 = (gcnew System::Windows::Forms::Button());
            this->edge2_3 = (gcnew System::Windows::Forms::Button());
            this->cell89 = (gcnew System::Windows::Forms::Button());
            this->cell69 = (gcnew System::Windows::Forms::Button());
            this->cell29 = (gcnew System::Windows::Forms::Button());
            this->edge44_45 = (gcnew System::Windows::Forms::Button());
            this->edge4_5 = (gcnew System::Windows::Forms::Button());
            this->edge80_81 = (gcnew System::Windows::Forms::Button());
            this->edge60_61 = (gcnew System::Windows::Forms::Button());
            this->edge20_21 = (gcnew System::Windows::Forms::Button());
            this->cell49 = (gcnew System::Windows::Forms::Button());
            this->cell9 = (gcnew System::Windows::Forms::Button());
            this->cell88 = (gcnew System::Windows::Forms::Button());
            this->cell68 = (gcnew System::Windows::Forms::Button());
            this->edge40_41 = (gcnew System::Windows::Forms::Button());
            this->cell28 = (gcnew System::Windows::Forms::Button());
            this->cell87 = (gcnew System::Windows::Forms::Button());
            this->cell67 = (gcnew System::Windows::Forms::Button());
            this->edge0_1 = (gcnew System::Windows::Forms::Button());
            this->cell48 = (gcnew System::Windows::Forms::Button());
            this->cell27 = (gcnew System::Windows::Forms::Button());
            this->cell86 = (gcnew System::Windows::Forms::Button());
            this->cell66 = (gcnew System::Windows::Forms::Button());
            this->cell8 = (gcnew System::Windows::Forms::Button());
            this->cell47 = (gcnew System::Windows::Forms::Button());
            this->cell26 = (gcnew System::Windows::Forms::Button());
            this->cell83 = (gcnew System::Windows::Forms::Button());
            this->cell63 = (gcnew System::Windows::Forms::Button());
            this->cell7 = (gcnew System::Windows::Forms::Button());
            this->cell46 = (gcnew System::Windows::Forms::Button());
            this->cell23 = (gcnew System::Windows::Forms::Button());
            this->cell85 = (gcnew System::Windows::Forms::Button());
            this->cell65 = (gcnew System::Windows::Forms::Button());
            this->cell6 = (gcnew System::Windows::Forms::Button());
            this->cell43 = (gcnew System::Windows::Forms::Button());
            this->cell82 = (gcnew System::Windows::Forms::Button());
            this->cell25 = (gcnew System::Windows::Forms::Button());
            this->cell62 = (gcnew System::Windows::Forms::Button());
            this->cell3 = (gcnew System::Windows::Forms::Button());
            this->cell45 = (gcnew System::Windows::Forms::Button());
            this->cell84 = (gcnew System::Windows::Forms::Button());
            this->cell22 = (gcnew System::Windows::Forms::Button());
            this->cell64 = (gcnew System::Windows::Forms::Button());
            this->cell5 = (gcnew System::Windows::Forms::Button());
            this->cell42 = (gcnew System::Windows::Forms::Button());
            this->cell81 = (gcnew System::Windows::Forms::Button());
            this->cell24 = (gcnew System::Windows::Forms::Button());
            this->cell61 = (gcnew System::Windows::Forms::Button());
            this->cell2 = (gcnew System::Windows::Forms::Button());
            this->cell44 = (gcnew System::Windows::Forms::Button());
            this->cell80 = (gcnew System::Windows::Forms::Button());
            this->cell21 = (gcnew System::Windows::Forms::Button());
            this->cell60 = (gcnew System::Windows::Forms::Button());
            this->cell4 = (gcnew System::Windows::Forms::Button());
            this->cell41 = (gcnew System::Windows::Forms::Button());
            this->cell20 = (gcnew System::Windows::Forms::Button());
            this->cell40 = (gcnew System::Windows::Forms::Button());
            this->cell1 = (gcnew System::Windows::Forms::Button());
            this->cell0 = (gcnew System::Windows::Forms::Button());
            this->textBox1 = (gcnew System::Windows::Forms::TextBox());
            this->textBox2 = (gcnew System::Windows::Forms::TextBox());
            this->go = (gcnew System::Windows::Forms::Button());
            this->label1 = (gcnew System::Windows::Forms::Label());
            this->label2 = (gcnew System::Windows::Forms::Label());
            this->label3 = (gcnew System::Windows::Forms::Label());
            this->panel2 = (gcnew System::Windows::Forms::Panel());
            this->panel1->SuspendLayout();
            this->panel2->SuspendLayout();
            this->SuspendLayout();
            // 
            // panel1
            // 
            this->panel1->Anchor = System::Windows::Forms::AnchorStyles::Top;
            this->panel1->Controls->Add(this->edge79_89);
            this->panel1->Controls->Add(this->edge39_49);
            this->panel1->Controls->Add(this->edge59_69);
            this->panel1->Controls->Add(this->edge19_29);
            this->panel1->Controls->Add(this->edge77_87);
            this->panel1->Controls->Add(this->edge37_47);
            this->panel1->Controls->Add(this->edge57_67);
            this->panel1->Controls->Add(this->edge17_27);
            this->panel1->Controls->Add(this->edge73_83);
            this->panel1->Controls->Add(this->edge33_43);
            this->panel1->Controls->Add(this->edge53_63);
            this->panel1->Controls->Add(this->edge13_23);
            this->panel1->Controls->Add(this->edge75_85);
            this->panel1->Controls->Add(this->edge35_45);
            this->panel1->Controls->Add(this->edge55_65);
            this->panel1->Controls->Add(this->edge15_25);
            this->panel1->Controls->Add(this->edge71_81);
            this->panel1->Controls->Add(this->edge31_41);
            this->panel1->Controls->Add(this->edge51_61);
            this->panel1->Controls->Add(this->edge11_21);
            this->panel1->Controls->Add(this->edge78_88);
            this->panel1->Controls->Add(this->edge38_48);
            this->panel1->Controls->Add(this->edge58_68);
            this->panel1->Controls->Add(this->edge18_28);
            this->panel1->Controls->Add(this->edge76_86);
            this->panel1->Controls->Add(this->edge36_46);
            this->panel1->Controls->Add(this->edge56_66);
            this->panel1->Controls->Add(this->edge16_26);
            this->panel1->Controls->Add(this->edge72_82);
            this->panel1->Controls->Add(this->edge32_42);
            this->panel1->Controls->Add(this->edge52_62);
            this->panel1->Controls->Add(this->edge12_22);
            this->panel1->Controls->Add(this->edge74_84);
            this->panel1->Controls->Add(this->edge34_44);
            this->panel1->Controls->Add(this->edge54_64);
            this->panel1->Controls->Add(this->edge14_24);
            this->panel1->Controls->Add(this->edge70_80);
            this->panel1->Controls->Add(this->edge30_40);
            this->panel1->Controls->Add(this->edge50_60);
            this->panel1->Controls->Add(this->edge10_20);
            this->panel1->Controls->Add(this->edge97_98);
            this->panel1->Controls->Add(this->edge77_78);
            this->panel1->Controls->Add(this->edge37_38);
            this->panel1->Controls->Add(this->edge57_58);
            this->panel1->Controls->Add(this->edge17_18);
            this->panel1->Controls->Add(this->edge93_94);
            this->panel1->Controls->Add(this->edge73_74);
            this->panel1->Controls->Add(this->edge33_34);
            this->panel1->Controls->Add(this->edge53_54);
            this->panel1->Controls->Add(this->edge13_14);
            this->panel1->Controls->Add(this->edge95_96);
            this->panel1->Controls->Add(this->edge75_76);
            this->panel1->Controls->Add(this->edge35_36);
            this->panel1->Controls->Add(this->edge55_56);
            this->panel1->Controls->Add(this->edge15_16);
            this->panel1->Controls->Add(this->edge91_92);
            this->panel1->Controls->Add(this->edge71_72);
            this->panel1->Controls->Add(this->edge31_32);
            this->panel1->Controls->Add(this->edge51_52);
            this->panel1->Controls->Add(this->edge11_12);
            this->panel1->Controls->Add(this->edge98_99);
            this->panel1->Controls->Add(this->edge78_79);
            this->panel1->Controls->Add(this->edge38_39);
            this->panel1->Controls->Add(this->edge58_59);
            this->panel1->Controls->Add(this->edge18_19);
            this->panel1->Controls->Add(this->edge96_97);
            this->panel1->Controls->Add(this->edge76_77);
            this->panel1->Controls->Add(this->edge36_37);
            this->panel1->Controls->Add(this->edge56_57);
            this->panel1->Controls->Add(this->edge16_17);
            this->panel1->Controls->Add(this->edge92_93);
            this->panel1->Controls->Add(this->edge72_73);
            this->panel1->Controls->Add(this->edge32_33);
            this->panel1->Controls->Add(this->edge52_53);
            this->panel1->Controls->Add(this->edge12_13);
            this->panel1->Controls->Add(this->edge94_95);
            this->panel1->Controls->Add(this->edge74_75);
            this->panel1->Controls->Add(this->edge34_35);
            this->panel1->Controls->Add(this->edge54_55);
            this->panel1->Controls->Add(this->edge14_15);
            this->panel1->Controls->Add(this->edge90_91);
            this->panel1->Controls->Add(this->edge70_71);
            this->panel1->Controls->Add(this->edge30_31);
            this->panel1->Controls->Add(this->edge50_51);
            this->panel1->Controls->Add(this->edge10_11);
            this->panel1->Controls->Add(this->cell99);
            this->panel1->Controls->Add(this->cell79);
            this->panel1->Controls->Add(this->cell39);
            this->panel1->Controls->Add(this->cell97);
            this->panel1->Controls->Add(this->cell77);
            this->panel1->Controls->Add(this->cell37);
            this->panel1->Controls->Add(this->cell59);
            this->panel1->Controls->Add(this->cell19);
            this->panel1->Controls->Add(this->cell93);
            this->panel1->Controls->Add(this->cell73);
            this->panel1->Controls->Add(this->cell33);
            this->panel1->Controls->Add(this->cell57);
            this->panel1->Controls->Add(this->cell17);
            this->panel1->Controls->Add(this->cell95);
            this->panel1->Controls->Add(this->cell75);
            this->panel1->Controls->Add(this->cell35);
            this->panel1->Controls->Add(this->cell53);
            this->panel1->Controls->Add(this->cell13);
            this->panel1->Controls->Add(this->cell98);
            this->panel1->Controls->Add(this->cell78);
            this->panel1->Controls->Add(this->cell38);
            this->panel1->Controls->Add(this->cell55);
            this->panel1->Controls->Add(this->cell15);
            this->panel1->Controls->Add(this->cell91);
            this->panel1->Controls->Add(this->cell71);
            this->panel1->Controls->Add(this->cell31);
            this->panel1->Controls->Add(this->cell58);
            this->panel1->Controls->Add(this->cell18);
            this->panel1->Controls->Add(this->cell96);
            this->panel1->Controls->Add(this->cell76);
            this->panel1->Controls->Add(this->cell36);
            this->panel1->Controls->Add(this->cell51);
            this->panel1->Controls->Add(this->cell11);
            this->panel1->Controls->Add(this->cell92);
            this->panel1->Controls->Add(this->cell72);
            this->panel1->Controls->Add(this->cell32);
            this->panel1->Controls->Add(this->cell56);
            this->panel1->Controls->Add(this->cell16);
            this->panel1->Controls->Add(this->cell94);
            this->panel1->Controls->Add(this->cell74);
            this->panel1->Controls->Add(this->cell34);
            this->panel1->Controls->Add(this->cell52);
            this->panel1->Controls->Add(this->cell12);
            this->panel1->Controls->Add(this->edge89_99);
            this->panel1->Controls->Add(this->edge69_79);
            this->panel1->Controls->Add(this->edge29_39);
            this->panel1->Controls->Add(this->cell54);
            this->panel1->Controls->Add(this->cell14);
            this->panel1->Controls->Add(this->cell90);
            this->panel1->Controls->Add(this->cell70);
            this->panel1->Controls->Add(this->cell30);
            this->panel1->Controls->Add(this->edge49_59);
            this->panel1->Controls->Add(this->edge9_19);
            this->panel1->Controls->Add(this->edge87_97);
            this->panel1->Controls->Add(this->edge67_77);
            this->panel1->Controls->Add(this->edge27_37);
            this->panel1->Controls->Add(this->cell50);
            this->panel1->Controls->Add(this->cell10);
            this->panel1->Controls->Add(this->edge83_93);
            this->panel1->Controls->Add(this->edge63_73);
            this->panel1->Controls->Add(this->edge23_33);
            this->panel1->Controls->Add(this->edge47_57);
            this->panel1->Controls->Add(this->edge7_17);
            this->panel1->Controls->Add(this->edge85_95);
            this->panel1->Controls->Add(this->edge65_75);
            this->panel1->Controls->Add(this->edge25_35);
            this->panel1->Controls->Add(this->edge43_53);
            this->panel1->Controls->Add(this->edge3_13);
            this->panel1->Controls->Add(this->edge88_98);
            this->panel1->Controls->Add(this->edge68_78);
            this->panel1->Controls->Add(this->edge28_38);
            this->panel1->Controls->Add(this->edge45_55);
            this->panel1->Controls->Add(this->edge5_15);
            this->panel1->Controls->Add(this->edge81_91);
            this->panel1->Controls->Add(this->edge61_71);
            this->panel1->Controls->Add(this->edge21_31);
            this->panel1->Controls->Add(this->edge48_58);
            this->panel1->Controls->Add(this->edge8_18);
            this->panel1->Controls->Add(this->edge86_96);
            this->panel1->Controls->Add(this->edge66_76);
            this->panel1->Controls->Add(this->edge26_36);
            this->panel1->Controls->Add(this->edge41_51);
            this->panel1->Controls->Add(this->edge1_11);
            this->panel1->Controls->Add(this->edge82_92);
            this->panel1->Controls->Add(this->edge62_72);
            this->panel1->Controls->Add(this->edge22_32);
            this->panel1->Controls->Add(this->edge46_56);
            this->panel1->Controls->Add(this->edge6_16);
            this->panel1->Controls->Add(this->edge84_94);
            this->panel1->Controls->Add(this->edge64_74);
            this->panel1->Controls->Add(this->edge24_34);
            this->panel1->Controls->Add(this->edge42_52);
            this->panel1->Controls->Add(this->edge2_12);
            this->panel1->Controls->Add(this->edge44_54);
            this->panel1->Controls->Add(this->edge4_14);
            this->panel1->Controls->Add(this->edge80_90);
            this->panel1->Controls->Add(this->edge60_70);
            this->panel1->Controls->Add(this->edge20_30);
            this->panel1->Controls->Add(this->edge87_88);
            this->panel1->Controls->Add(this->edge67_68);
            this->panel1->Controls->Add(this->edge27_28);
            this->panel1->Controls->Add(this->edge40_50);
            this->panel1->Controls->Add(this->edge0_10);
            this->panel1->Controls->Add(this->edge83_84);
            this->panel1->Controls->Add(this->edge63_64);
            this->panel1->Controls->Add(this->edge23_24);
            this->panel1->Controls->Add(this->edge47_48);
            this->panel1->Controls->Add(this->edge7_8);
            this->panel1->Controls->Add(this->edge85_86);
            this->panel1->Controls->Add(this->edge65_66);
            this->panel1->Controls->Add(this->edge25_26);
            this->panel1->Controls->Add(this->edge43_44);
            this->panel1->Controls->Add(this->edge3_4);
            this->panel1->Controls->Add(this->edge88_89);
            this->panel1->Controls->Add(this->edge68_69);
            this->panel1->Controls->Add(this->edge28_29);
            this->panel1->Controls->Add(this->edge45_46);
            this->panel1->Controls->Add(this->edge5_6);
            this->panel1->Controls->Add(this->edge81_82);
            this->panel1->Controls->Add(this->edge61_62);
            this->panel1->Controls->Add(this->edge21_22);
            this->panel1->Controls->Add(this->edge48_49);
            this->panel1->Controls->Add(this->edge8_9);
            this->panel1->Controls->Add(this->edge86_87);
            this->panel1->Controls->Add(this->edge66_67);
            this->panel1->Controls->Add(this->edge26_27);
            this->panel1->Controls->Add(this->edge41_42);
            this->panel1->Controls->Add(this->edge1_2);
            this->panel1->Controls->Add(this->edge82_83);
            this->panel1->Controls->Add(this->edge62_63);
            this->panel1->Controls->Add(this->edge22_23);
            this->panel1->Controls->Add(this->edge46_47);
            this->panel1->Controls->Add(this->edge6_7);
            this->panel1->Controls->Add(this->edge84_85);
            this->panel1->Controls->Add(this->edge64_65);
            this->panel1->Controls->Add(this->edge24_25);
            this->panel1->Controls->Add(this->edge42_43);
            this->panel1->Controls->Add(this->edge2_3);
            this->panel1->Controls->Add(this->cell89);
            this->panel1->Controls->Add(this->cell69);
            this->panel1->Controls->Add(this->cell29);
            this->panel1->Controls->Add(this->edge44_45);
            this->panel1->Controls->Add(this->edge4_5);
            this->panel1->Controls->Add(this->edge80_81);
            this->panel1->Controls->Add(this->edge60_61);
            this->panel1->Controls->Add(this->edge20_21);
            this->panel1->Controls->Add(this->cell49);
            this->panel1->Controls->Add(this->cell9);
            this->panel1->Controls->Add(this->cell88);
            this->panel1->Controls->Add(this->cell68);
            this->panel1->Controls->Add(this->edge40_41);
            this->panel1->Controls->Add(this->cell28);
            this->panel1->Controls->Add(this->cell87);
            this->panel1->Controls->Add(this->cell67);
            this->panel1->Controls->Add(this->edge0_1);
            this->panel1->Controls->Add(this->cell48);
            this->panel1->Controls->Add(this->cell27);
            this->panel1->Controls->Add(this->cell86);
            this->panel1->Controls->Add(this->cell66);
            this->panel1->Controls->Add(this->cell8);
            this->panel1->Controls->Add(this->cell47);
            this->panel1->Controls->Add(this->cell26);
            this->panel1->Controls->Add(this->cell83);
            this->panel1->Controls->Add(this->cell63);
            this->panel1->Controls->Add(this->cell7);
            this->panel1->Controls->Add(this->cell46);
            this->panel1->Controls->Add(this->cell23);
            this->panel1->Controls->Add(this->cell85);
            this->panel1->Controls->Add(this->cell65);
            this->panel1->Controls->Add(this->cell6);
            this->panel1->Controls->Add(this->cell43);
            this->panel1->Controls->Add(this->cell82);
            this->panel1->Controls->Add(this->cell25);
            this->panel1->Controls->Add(this->cell62);
            this->panel1->Controls->Add(this->cell3);
            this->panel1->Controls->Add(this->cell45);
            this->panel1->Controls->Add(this->cell84);
            this->panel1->Controls->Add(this->cell22);
            this->panel1->Controls->Add(this->cell64);
            this->panel1->Controls->Add(this->cell5);
            this->panel1->Controls->Add(this->cell42);
            this->panel1->Controls->Add(this->cell81);
            this->panel1->Controls->Add(this->cell24);
            this->panel1->Controls->Add(this->cell61);
            this->panel1->Controls->Add(this->cell2);
            this->panel1->Controls->Add(this->cell44);
            this->panel1->Controls->Add(this->cell80);
            this->panel1->Controls->Add(this->cell21);
            this->panel1->Controls->Add(this->cell60);
            this->panel1->Controls->Add(this->cell4);
            this->panel1->Controls->Add(this->cell41);
            this->panel1->Controls->Add(this->cell20);
            this->panel1->Controls->Add(this->cell40);
            this->panel1->Controls->Add(this->cell1);
            this->panel1->Controls->Add(this->cell0);
            this->panel1->Location = System::Drawing::Point(0, 0);
            this->panel1->Name = L"panel1";
            this->panel1->Size = System::Drawing::Size(1620, 981);
            this->panel1->TabIndex = 0;
            // 
            // edge79_89
            // 
            this->edge79_89->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->edge79_89->FlatAppearance->BorderSize = 0;
            this->edge79_89->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->edge79_89->Location = System::Drawing::Point(1081, 752);
            this->edge79_89->Name = L"edge79_89";
            this->edge79_89->Size = System::Drawing::Size(92, 18);
            this->edge79_89->TabIndex = 7;
            this->edge79_89->UseVisualStyleBackColor = false;
            this->edge79_89->Click += gcnew System::EventHandler(this, &MyForm::edge79_89_Click);
            // 
            // edge39_49
            // 
            this->edge39_49->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->edge39_49->FlatAppearance->BorderSize = 0;
            this->edge39_49->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->edge39_49->Location = System::Drawing::Point(1083, 368);
            this->edge39_49->Name = L"edge39_49";
            this->edge39_49->Size = System::Drawing::Size(92, 18);
            this->edge39_49->TabIndex = 7;
            this->edge39_49->UseVisualStyleBackColor = false;
            this->edge39_49->Click += gcnew System::EventHandler(this, &MyForm::edge39_49_Click);
            // 
            // edge59_69
            // 
            this->edge59_69->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->edge59_69->FlatAppearance->BorderSize = 0;
            this->edge59_69->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->edge59_69->Location = System::Drawing::Point(1082, 560);
            this->edge59_69->Name = L"edge59_69";
            this->edge59_69->Size = System::Drawing::Size(92, 18);
            this->edge59_69->TabIndex = 7;
            this->edge59_69->UseVisualStyleBackColor = false;
            this->edge59_69->Click += gcnew System::EventHandler(this, &MyForm::edge59_69_Click);
            // 
            // edge19_29
            // 
            this->edge19_29->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->edge19_29->FlatAppearance->BorderSize = 0;
            this->edge19_29->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->edge19_29->Location = System::Drawing::Point(1084, 176);
            this->edge19_29->Name = L"edge19_29";
            this->edge19_29->Size = System::Drawing::Size(92, 18);
            this->edge19_29->TabIndex = 7;
            this->edge19_29->UseVisualStyleBackColor = false;
            this->edge19_29->Click += gcnew System::EventHandler(this, &MyForm::edge19_29_Click);
            // 
            // edge77_87
            // 
            this->edge77_87->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->edge77_87->FlatAppearance->BorderSize = 0;
            this->edge77_87->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->edge77_87->Location = System::Drawing::Point(844, 752);
            this->edge77_87->Name = L"edge77_87";
            this->edge77_87->Size = System::Drawing::Size(92, 18);
            this->edge77_87->TabIndex = 7;
            this->edge77_87->UseVisualStyleBackColor = false;
            this->edge77_87->Click += gcnew System::EventHandler(this, &MyForm::edge77_87_Click);
            // 
            // edge37_47
            // 
            this->edge37_47->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->edge37_47->FlatAppearance->BorderSize = 0;
            this->edge37_47->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->edge37_47->Location = System::Drawing::Point(846, 368);
            this->edge37_47->Name = L"edge37_47";
            this->edge37_47->Size = System::Drawing::Size(92, 18);
            this->edge37_47->TabIndex = 7;
            this->edge37_47->UseVisualStyleBackColor = false;
            this->edge37_47->Click += gcnew System::EventHandler(this, &MyForm::edge37_47_Click);
            // 
            // edge57_67
            // 
            this->edge57_67->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->edge57_67->FlatAppearance->BorderSize = 0;
            this->edge57_67->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->edge57_67->Location = System::Drawing::Point(845, 560);
            this->edge57_67->Name = L"edge57_67";
            this->edge57_67->Size = System::Drawing::Size(92, 18);
            this->edge57_67->TabIndex = 7;
            this->edge57_67->UseVisualStyleBackColor = false;
            this->edge57_67->Click += gcnew System::EventHandler(this, &MyForm::edge57_67_Click);
            // 
            // edge17_27
            // 
            this->edge17_27->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->edge17_27->FlatAppearance->BorderSize = 0;
            this->edge17_27->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->edge17_27->Location = System::Drawing::Point(847, 176);
            this->edge17_27->Name = L"edge17_27";
            this->edge17_27->Size = System::Drawing::Size(92, 18);
            this->edge17_27->TabIndex = 7;
            this->edge17_27->UseVisualStyleBackColor = false;
            this->edge17_27->Click += gcnew System::EventHandler(this, &MyForm::edge17_27_Click);
            // 
            // edge73_83
            // 
            this->edge73_83->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->edge73_83->FlatAppearance->BorderSize = 0;
            this->edge73_83->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->edge73_83->Location = System::Drawing::Point(370, 752);
            this->edge73_83->Name = L"edge73_83";
            this->edge73_83->Size = System::Drawing::Size(92, 18);
            this->edge73_83->TabIndex = 7;
            this->edge73_83->UseVisualStyleBackColor = false;
            this->edge73_83->Click += gcnew System::EventHandler(this, &MyForm::edge73_83_Click);
            // 
            // edge33_43
            // 
            this->edge33_43->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->edge33_43->FlatAppearance->BorderSize = 0;
            this->edge33_43->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->edge33_43->Location = System::Drawing::Point(372, 368);
            this->edge33_43->Name = L"edge33_43";
            this->edge33_43->Size = System::Drawing::Size(92, 18);
            this->edge33_43->TabIndex = 7;
            this->edge33_43->UseVisualStyleBackColor = false;
            this->edge33_43->Click += gcnew System::EventHandler(this, &MyForm::edge33_43_Click);
            // 
            // edge53_63
            // 
            this->edge53_63->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->edge53_63->FlatAppearance->BorderSize = 0;
            this->edge53_63->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->edge53_63->Location = System::Drawing::Point(371, 560);
            this->edge53_63->Name = L"edge53_63";
            this->edge53_63->Size = System::Drawing::Size(92, 18);
            this->edge53_63->TabIndex = 7;
            this->edge53_63->UseVisualStyleBackColor = false;
            this->edge53_63->Click += gcnew System::EventHandler(this, &MyForm::edge53_63_Click);
            // 
            // edge13_23
            // 
            this->edge13_23->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->edge13_23->FlatAppearance->BorderSize = 0;
            this->edge13_23->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->edge13_23->Location = System::Drawing::Point(373, 176);
            this->edge13_23->Name = L"edge13_23";
            this->edge13_23->Size = System::Drawing::Size(92, 18);
            this->edge13_23->TabIndex = 7;
            this->edge13_23->UseVisualStyleBackColor = false;
            this->edge13_23->Click += gcnew System::EventHandler(this, &MyForm::edge13_23_Click);
            // 
            // edge75_85
            // 
            this->edge75_85->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->edge75_85->FlatAppearance->BorderSize = 0;
            this->edge75_85->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->edge75_85->Location = System::Drawing::Point(607, 752);
            this->edge75_85->Name = L"edge75_85";
            this->edge75_85->Size = System::Drawing::Size(92, 18);
            this->edge75_85->TabIndex = 7;
            this->edge75_85->UseVisualStyleBackColor = false;
            this->edge75_85->Click += gcnew System::EventHandler(this, &MyForm::edge75_85_Click);
            // 
            // edge35_45
            // 
            this->edge35_45->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->edge35_45->FlatAppearance->BorderSize = 0;
            this->edge35_45->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->edge35_45->Location = System::Drawing::Point(609, 368);
            this->edge35_45->Name = L"edge35_45";
            this->edge35_45->Size = System::Drawing::Size(92, 18);
            this->edge35_45->TabIndex = 7;
            this->edge35_45->UseVisualStyleBackColor = false;
            this->edge35_45->Click += gcnew System::EventHandler(this, &MyForm::edge35_45_Click);
            // 
            // edge55_65
            // 
            this->edge55_65->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->edge55_65->FlatAppearance->BorderSize = 0;
            this->edge55_65->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->edge55_65->Location = System::Drawing::Point(608, 560);
            this->edge55_65->Name = L"edge55_65";
            this->edge55_65->Size = System::Drawing::Size(92, 18);
            this->edge55_65->TabIndex = 7;
            this->edge55_65->UseVisualStyleBackColor = false;
            this->edge55_65->Click += gcnew System::EventHandler(this, &MyForm::edge55_65_Click);
            // 
            // edge15_25
            // 
            this->edge15_25->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->edge15_25->FlatAppearance->BorderSize = 0;
            this->edge15_25->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->edge15_25->Location = System::Drawing::Point(610, 176);
            this->edge15_25->Name = L"edge15_25";
            this->edge15_25->Size = System::Drawing::Size(92, 18);
            this->edge15_25->TabIndex = 7;
            this->edge15_25->UseVisualStyleBackColor = false;
            this->edge15_25->Click += gcnew System::EventHandler(this, &MyForm::edge15_25_Click);
            // 
            // edge71_81
            // 
            this->edge71_81->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->edge71_81->FlatAppearance->BorderSize = 0;
            this->edge71_81->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->edge71_81->Location = System::Drawing::Point(133, 752);
            this->edge71_81->Name = L"edge71_81";
            this->edge71_81->Size = System::Drawing::Size(92, 18);
            this->edge71_81->TabIndex = 7;
            this->edge71_81->UseVisualStyleBackColor = false;
            this->edge71_81->Click += gcnew System::EventHandler(this, &MyForm::edge71_81_Click);
            // 
            // edge31_41
            // 
            this->edge31_41->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->edge31_41->FlatAppearance->BorderSize = 0;
            this->edge31_41->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->edge31_41->Location = System::Drawing::Point(135, 368);
            this->edge31_41->Name = L"edge31_41";
            this->edge31_41->Size = System::Drawing::Size(92, 18);
            this->edge31_41->TabIndex = 7;
            this->edge31_41->UseVisualStyleBackColor = false;
            this->edge31_41->Click += gcnew System::EventHandler(this, &MyForm::edge31_41_Click);
            // 
            // edge51_61
            // 
            this->edge51_61->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->edge51_61->FlatAppearance->BorderSize = 0;
            this->edge51_61->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->edge51_61->Location = System::Drawing::Point(134, 560);
            this->edge51_61->Name = L"edge51_61";
            this->edge51_61->Size = System::Drawing::Size(92, 18);
            this->edge51_61->TabIndex = 7;
            this->edge51_61->UseVisualStyleBackColor = false;
            this->edge51_61->Click += gcnew System::EventHandler(this, &MyForm::edge51_61_Click);
            // 
            // edge11_21
            // 
            this->edge11_21->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->edge11_21->FlatAppearance->BorderSize = 0;
            this->edge11_21->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->edge11_21->Location = System::Drawing::Point(136, 176);
            this->edge11_21->Name = L"edge11_21";
            this->edge11_21->Size = System::Drawing::Size(92, 18);
            this->edge11_21->TabIndex = 7;
            this->edge11_21->UseVisualStyleBackColor = false;
            this->edge11_21->Click += gcnew System::EventHandler(this, &MyForm::edge11_21_Click);
            // 
            // edge78_88
            // 
            this->edge78_88->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->edge78_88->FlatAppearance->BorderSize = 0;
            this->edge78_88->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->edge78_88->Location = System::Drawing::Point(963, 752);
            this->edge78_88->Name = L"edge78_88";
            this->edge78_88->Size = System::Drawing::Size(92, 18);
            this->edge78_88->TabIndex = 7;
            this->edge78_88->UseVisualStyleBackColor = false;
            this->edge78_88->Click += gcnew System::EventHandler(this, &MyForm::edge78_88_Click);
            // 
            // edge38_48
            // 
            this->edge38_48->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->edge38_48->FlatAppearance->BorderSize = 0;
            this->edge38_48->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->edge38_48->Location = System::Drawing::Point(965, 368);
            this->edge38_48->Name = L"edge38_48";
            this->edge38_48->Size = System::Drawing::Size(92, 18);
            this->edge38_48->TabIndex = 7;
            this->edge38_48->UseVisualStyleBackColor = false;
            this->edge38_48->Click += gcnew System::EventHandler(this, &MyForm::edge38_48_Click);
            // 
            // edge58_68
            // 
            this->edge58_68->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->edge58_68->FlatAppearance->BorderSize = 0;
            this->edge58_68->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->edge58_68->Location = System::Drawing::Point(964, 560);
            this->edge58_68->Name = L"edge58_68";
            this->edge58_68->Size = System::Drawing::Size(92, 18);
            this->edge58_68->TabIndex = 7;
            this->edge58_68->UseVisualStyleBackColor = false;
            this->edge58_68->Click += gcnew System::EventHandler(this, &MyForm::edge58_68_Click);
            // 
            // edge18_28
            // 
            this->edge18_28->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->edge18_28->FlatAppearance->BorderSize = 0;
            this->edge18_28->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->edge18_28->Location = System::Drawing::Point(966, 176);
            this->edge18_28->Name = L"edge18_28";
            this->edge18_28->Size = System::Drawing::Size(92, 18);
            this->edge18_28->TabIndex = 7;
            this->edge18_28->UseVisualStyleBackColor = false;
            this->edge18_28->Click += gcnew System::EventHandler(this, &MyForm::edge18_28_Click);
            // 
            // edge76_86
            // 
            this->edge76_86->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->edge76_86->FlatAppearance->BorderSize = 0;
            this->edge76_86->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->edge76_86->Location = System::Drawing::Point(726, 752);
            this->edge76_86->Name = L"edge76_86";
            this->edge76_86->Size = System::Drawing::Size(92, 18);
            this->edge76_86->TabIndex = 7;
            this->edge76_86->UseVisualStyleBackColor = false;
            this->edge76_86->Click += gcnew System::EventHandler(this, &MyForm::edge76_86_Click);
            // 
            // edge36_46
            // 
            this->edge36_46->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->edge36_46->FlatAppearance->BorderSize = 0;
            this->edge36_46->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->edge36_46->Location = System::Drawing::Point(728, 368);
            this->edge36_46->Name = L"edge36_46";
            this->edge36_46->Size = System::Drawing::Size(92, 18);
            this->edge36_46->TabIndex = 7;
            this->edge36_46->UseVisualStyleBackColor = false;
            this->edge36_46->Click += gcnew System::EventHandler(this, &MyForm::edge36_46_Click);
            // 
            // edge56_66
            // 
            this->edge56_66->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->edge56_66->FlatAppearance->BorderSize = 0;
            this->edge56_66->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->edge56_66->Location = System::Drawing::Point(727, 560);
            this->edge56_66->Name = L"edge56_66";
            this->edge56_66->Size = System::Drawing::Size(92, 18);
            this->edge56_66->TabIndex = 7;
            this->edge56_66->UseVisualStyleBackColor = false;
            this->edge56_66->Click += gcnew System::EventHandler(this, &MyForm::edge56_66_Click);
            // 
            // edge16_26
            // 
            this->edge16_26->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->edge16_26->FlatAppearance->BorderSize = 0;
            this->edge16_26->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->edge16_26->Location = System::Drawing::Point(729, 176);
            this->edge16_26->Name = L"edge16_26";
            this->edge16_26->Size = System::Drawing::Size(92, 18);
            this->edge16_26->TabIndex = 7;
            this->edge16_26->UseVisualStyleBackColor = false;
            this->edge16_26->Click += gcnew System::EventHandler(this, &MyForm::edge16_26_Click);
            // 
            // edge72_82
            // 
            this->edge72_82->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->edge72_82->FlatAppearance->BorderSize = 0;
            this->edge72_82->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->edge72_82->Location = System::Drawing::Point(252, 752);
            this->edge72_82->Name = L"edge72_82";
            this->edge72_82->Size = System::Drawing::Size(92, 18);
            this->edge72_82->TabIndex = 7;
            this->edge72_82->UseVisualStyleBackColor = false;
            this->edge72_82->Click += gcnew System::EventHandler(this, &MyForm::edge72_82_Click);
            // 
            // edge32_42
            // 
            this->edge32_42->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->edge32_42->FlatAppearance->BorderSize = 0;
            this->edge32_42->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->edge32_42->Location = System::Drawing::Point(254, 368);
            this->edge32_42->Name = L"edge32_42";
            this->edge32_42->Size = System::Drawing::Size(92, 18);
            this->edge32_42->TabIndex = 7;
            this->edge32_42->UseVisualStyleBackColor = false;
            this->edge32_42->Click += gcnew System::EventHandler(this, &MyForm::edge32_42_Click);
            // 
            // edge52_62
            // 
            this->edge52_62->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->edge52_62->FlatAppearance->BorderSize = 0;
            this->edge52_62->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->edge52_62->Location = System::Drawing::Point(253, 560);
            this->edge52_62->Name = L"edge52_62";
            this->edge52_62->Size = System::Drawing::Size(92, 18);
            this->edge52_62->TabIndex = 7;
            this->edge52_62->UseVisualStyleBackColor = false;
            this->edge52_62->Click += gcnew System::EventHandler(this, &MyForm::edge52_62_Click);
            // 
            // edge12_22
            // 
            this->edge12_22->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->edge12_22->FlatAppearance->BorderSize = 0;
            this->edge12_22->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->edge12_22->Location = System::Drawing::Point(255, 176);
            this->edge12_22->Name = L"edge12_22";
            this->edge12_22->Size = System::Drawing::Size(92, 18);
            this->edge12_22->TabIndex = 7;
            this->edge12_22->UseVisualStyleBackColor = false;
            this->edge12_22->Click += gcnew System::EventHandler(this, &MyForm::edge12_22_Click);
            // 
            // edge74_84
            // 
            this->edge74_84->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->edge74_84->FlatAppearance->BorderSize = 0;
            this->edge74_84->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->edge74_84->Location = System::Drawing::Point(489, 752);
            this->edge74_84->Name = L"edge74_84";
            this->edge74_84->Size = System::Drawing::Size(92, 18);
            this->edge74_84->TabIndex = 7;
            this->edge74_84->UseVisualStyleBackColor = false;
            this->edge74_84->Click += gcnew System::EventHandler(this, &MyForm::edge74_84_Click);
            // 
            // edge34_44
            // 
            this->edge34_44->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->edge34_44->FlatAppearance->BorderSize = 0;
            this->edge34_44->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->edge34_44->Location = System::Drawing::Point(491, 368);
            this->edge34_44->Name = L"edge34_44";
            this->edge34_44->Size = System::Drawing::Size(92, 18);
            this->edge34_44->TabIndex = 7;
            this->edge34_44->UseVisualStyleBackColor = false;
            this->edge34_44->Click += gcnew System::EventHandler(this, &MyForm::edge34_44_Click);
            // 
            // edge54_64
            // 
            this->edge54_64->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->edge54_64->FlatAppearance->BorderSize = 0;
            this->edge54_64->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->edge54_64->Location = System::Drawing::Point(490, 560);
            this->edge54_64->Name = L"edge54_64";
            this->edge54_64->Size = System::Drawing::Size(92, 18);
            this->edge54_64->TabIndex = 7;
            this->edge54_64->UseVisualStyleBackColor = false;
            this->edge54_64->Click += gcnew System::EventHandler(this, &MyForm::edge54_64_Click);
            // 
            // edge14_24
            // 
            this->edge14_24->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->edge14_24->FlatAppearance->BorderSize = 0;
            this->edge14_24->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->edge14_24->Location = System::Drawing::Point(492, 176);
            this->edge14_24->Name = L"edge14_24";
            this->edge14_24->Size = System::Drawing::Size(92, 18);
            this->edge14_24->TabIndex = 7;
            this->edge14_24->UseVisualStyleBackColor = false;
            this->edge14_24->Click += gcnew System::EventHandler(this, &MyForm::edge14_24_Click);
            // 
            // edge70_80
            // 
            this->edge70_80->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->edge70_80->FlatAppearance->BorderSize = 0;
            this->edge70_80->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->edge70_80->Location = System::Drawing::Point(15, 752);
            this->edge70_80->Name = L"edge70_80";
            this->edge70_80->Size = System::Drawing::Size(92, 18);
            this->edge70_80->TabIndex = 7;
            this->edge70_80->UseVisualStyleBackColor = false;
            this->edge70_80->Click += gcnew System::EventHandler(this, &MyForm::edge70_80_Click);
            // 
            // edge30_40
            // 
            this->edge30_40->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->edge30_40->FlatAppearance->BorderSize = 0;
            this->edge30_40->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->edge30_40->Location = System::Drawing::Point(17, 368);
            this->edge30_40->Name = L"edge30_40";
            this->edge30_40->Size = System::Drawing::Size(92, 18);
            this->edge30_40->TabIndex = 7;
            this->edge30_40->UseVisualStyleBackColor = false;
            this->edge30_40->Click += gcnew System::EventHandler(this, &MyForm::edge30_40_Click);
            // 
            // edge50_60
            // 
            this->edge50_60->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->edge50_60->FlatAppearance->BorderSize = 0;
            this->edge50_60->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->edge50_60->Location = System::Drawing::Point(16, 560);
            this->edge50_60->Name = L"edge50_60";
            this->edge50_60->Size = System::Drawing::Size(92, 18);
            this->edge50_60->TabIndex = 7;
            this->edge50_60->UseVisualStyleBackColor = false;
            this->edge50_60->Click += gcnew System::EventHandler(this, &MyForm::edge50_60_Click);
            // 
            // edge10_20
            // 
            this->edge10_20->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->edge10_20->FlatAppearance->BorderSize = 0;
            this->edge10_20->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->edge10_20->Location = System::Drawing::Point(18, 176);
            this->edge10_20->Name = L"edge10_20";
            this->edge10_20->Size = System::Drawing::Size(92, 18);
            this->edge10_20->TabIndex = 7;
            this->edge10_20->UseVisualStyleBackColor = false;
            this->edge10_20->Click += gcnew System::EventHandler(this, &MyForm::edge10_20_Click);
            // 
            // edge97_98
            // 
            this->edge97_98->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->edge97_98->FlatAppearance->BorderSize = 0;
            this->edge97_98->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->edge97_98->Location = System::Drawing::Point(936, 867);
            this->edge97_98->Name = L"edge97_98";
            this->edge97_98->Size = System::Drawing::Size(22, 75);
            this->edge97_98->TabIndex = 6;
            this->edge97_98->UseVisualStyleBackColor = false;
            this->edge97_98->Click += gcnew System::EventHandler(this, &MyForm::edge97_98_Click);
            // 
            // edge77_78
            // 
            this->edge77_78->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->edge77_78->FlatAppearance->BorderSize = 0;
            this->edge77_78->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->edge77_78->Location = System::Drawing::Point(938, 675);
            this->edge77_78->Name = L"edge77_78";
            this->edge77_78->Size = System::Drawing::Size(22, 75);
            this->edge77_78->TabIndex = 6;
            this->edge77_78->UseVisualStyleBackColor = false;
            this->edge77_78->Click += gcnew System::EventHandler(this, &MyForm::edge77_78_Click);
            // 
            // edge37_38
            // 
            this->edge37_38->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->edge37_38->FlatAppearance->BorderSize = 0;
            this->edge37_38->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->edge37_38->Location = System::Drawing::Point(940, 291);
            this->edge37_38->Name = L"edge37_38";
            this->edge37_38->Size = System::Drawing::Size(22, 75);
            this->edge37_38->TabIndex = 6;
            this->edge37_38->UseVisualStyleBackColor = false;
            this->edge37_38->Click += gcnew System::EventHandler(this, &MyForm::edge37_38_Click);
            // 
            // edge57_58
            // 
            this->edge57_58->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->edge57_58->FlatAppearance->BorderSize = 0;
            this->edge57_58->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->edge57_58->Location = System::Drawing::Point(939, 483);
            this->edge57_58->Name = L"edge57_58";
            this->edge57_58->Size = System::Drawing::Size(22, 75);
            this->edge57_58->TabIndex = 6;
            this->edge57_58->UseVisualStyleBackColor = false;
            this->edge57_58->Click += gcnew System::EventHandler(this, &MyForm::edge57_58_Click);
            // 
            // edge17_18
            // 
            this->edge17_18->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->edge17_18->FlatAppearance->BorderSize = 0;
            this->edge17_18->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->edge17_18->Location = System::Drawing::Point(941, 99);
            this->edge17_18->Name = L"edge17_18";
            this->edge17_18->Size = System::Drawing::Size(22, 75);
            this->edge17_18->TabIndex = 6;
            this->edge17_18->UseVisualStyleBackColor = false;
            this->edge17_18->Click += gcnew System::EventHandler(this, &MyForm::edge17_18_Click);
            // 
            // edge93_94
            // 
            this->edge93_94->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->edge93_94->FlatAppearance->BorderSize = 0;
            this->edge93_94->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->edge93_94->Location = System::Drawing::Point(462, 867);
            this->edge93_94->Name = L"edge93_94";
            this->edge93_94->Size = System::Drawing::Size(22, 75);
            this->edge93_94->TabIndex = 6;
            this->edge93_94->UseVisualStyleBackColor = false;
            this->edge93_94->Click += gcnew System::EventHandler(this, &MyForm::edge93_94_Click);
            // 
            // edge73_74
            // 
            this->edge73_74->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->edge73_74->FlatAppearance->BorderSize = 0;
            this->edge73_74->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->edge73_74->Location = System::Drawing::Point(464, 675);
            this->edge73_74->Name = L"edge73_74";
            this->edge73_74->Size = System::Drawing::Size(22, 75);
            this->edge73_74->TabIndex = 6;
            this->edge73_74->UseVisualStyleBackColor = false;
            this->edge73_74->Click += gcnew System::EventHandler(this, &MyForm::edge73_74_Click);
            // 
            // edge33_34
            // 
            this->edge33_34->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->edge33_34->FlatAppearance->BorderSize = 0;
            this->edge33_34->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->edge33_34->Location = System::Drawing::Point(466, 291);
            this->edge33_34->Name = L"edge33_34";
            this->edge33_34->Size = System::Drawing::Size(22, 75);
            this->edge33_34->TabIndex = 6;
            this->edge33_34->UseVisualStyleBackColor = false;
            this->edge33_34->Click += gcnew System::EventHandler(this, &MyForm::edge33_34_Click);
            // 
            // edge53_54
            // 
            this->edge53_54->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->edge53_54->FlatAppearance->BorderSize = 0;
            this->edge53_54->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->edge53_54->Location = System::Drawing::Point(465, 483);
            this->edge53_54->Name = L"edge53_54";
            this->edge53_54->Size = System::Drawing::Size(22, 75);
            this->edge53_54->TabIndex = 6;
            this->edge53_54->UseVisualStyleBackColor = false;
            this->edge53_54->Click += gcnew System::EventHandler(this, &MyForm::edge53_54_Click);
            // 
            // edge13_14
            // 
            this->edge13_14->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->edge13_14->FlatAppearance->BorderSize = 0;
            this->edge13_14->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->edge13_14->Location = System::Drawing::Point(467, 99);
            this->edge13_14->Name = L"edge13_14";
            this->edge13_14->Size = System::Drawing::Size(22, 75);
            this->edge13_14->TabIndex = 6;
            this->edge13_14->UseVisualStyleBackColor = false;
            this->edge13_14->Click += gcnew System::EventHandler(this, &MyForm::edge13_14_Click);
            // 
            // edge95_96
            // 
            this->edge95_96->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->edge95_96->FlatAppearance->BorderSize = 0;
            this->edge95_96->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->edge95_96->Location = System::Drawing::Point(699, 867);
            this->edge95_96->Name = L"edge95_96";
            this->edge95_96->Size = System::Drawing::Size(22, 75);
            this->edge95_96->TabIndex = 6;
            this->edge95_96->UseVisualStyleBackColor = false;
            this->edge95_96->Click += gcnew System::EventHandler(this, &MyForm::edge95_96_Click);
            // 
            // edge75_76
            // 
            this->edge75_76->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->edge75_76->FlatAppearance->BorderSize = 0;
            this->edge75_76->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->edge75_76->Location = System::Drawing::Point(701, 675);
            this->edge75_76->Name = L"edge75_76";
            this->edge75_76->Size = System::Drawing::Size(22, 75);
            this->edge75_76->TabIndex = 6;
            this->edge75_76->UseVisualStyleBackColor = false;
            this->edge75_76->Click += gcnew System::EventHandler(this, &MyForm::edge75_76_Click);
            // 
            // edge35_36
            // 
            this->edge35_36->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->edge35_36->FlatAppearance->BorderSize = 0;
            this->edge35_36->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->edge35_36->Location = System::Drawing::Point(703, 291);
            this->edge35_36->Name = L"edge35_36";
            this->edge35_36->Size = System::Drawing::Size(22, 75);
            this->edge35_36->TabIndex = 6;
            this->edge35_36->UseVisualStyleBackColor = false;
            this->edge35_36->Click += gcnew System::EventHandler(this, &MyForm::edge35_36_Click);
            // 
            // edge55_56
            // 
            this->edge55_56->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->edge55_56->FlatAppearance->BorderSize = 0;
            this->edge55_56->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->edge55_56->Location = System::Drawing::Point(702, 483);
            this->edge55_56->Name = L"edge55_56";
            this->edge55_56->Size = System::Drawing::Size(22, 75);
            this->edge55_56->TabIndex = 6;
            this->edge55_56->UseVisualStyleBackColor = false;
            this->edge55_56->Click += gcnew System::EventHandler(this, &MyForm::edge55_56_Click);
            // 
            // edge15_16
            // 
            this->edge15_16->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->edge15_16->FlatAppearance->BorderSize = 0;
            this->edge15_16->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->edge15_16->Location = System::Drawing::Point(704, 99);
            this->edge15_16->Name = L"edge15_16";
            this->edge15_16->Size = System::Drawing::Size(22, 75);
            this->edge15_16->TabIndex = 6;
            this->edge15_16->UseVisualStyleBackColor = false;
            this->edge15_16->Click += gcnew System::EventHandler(this, &MyForm::edge15_16_Click);
            // 
            // edge91_92
            // 
            this->edge91_92->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->edge91_92->FlatAppearance->BorderSize = 0;
            this->edge91_92->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->edge91_92->Location = System::Drawing::Point(225, 867);
            this->edge91_92->Name = L"edge91_92";
            this->edge91_92->Size = System::Drawing::Size(22, 75);
            this->edge91_92->TabIndex = 6;
            this->edge91_92->UseVisualStyleBackColor = false;
            this->edge91_92->Click += gcnew System::EventHandler(this, &MyForm::edge91_92_Click);
            // 
            // edge71_72
            // 
            this->edge71_72->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->edge71_72->FlatAppearance->BorderSize = 0;
            this->edge71_72->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->edge71_72->Location = System::Drawing::Point(227, 675);
            this->edge71_72->Name = L"edge71_72";
            this->edge71_72->Size = System::Drawing::Size(22, 75);
            this->edge71_72->TabIndex = 6;
            this->edge71_72->UseVisualStyleBackColor = false;
            this->edge71_72->Click += gcnew System::EventHandler(this, &MyForm::edge71_72_Click);
            // 
            // edge31_32
            // 
            this->edge31_32->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->edge31_32->FlatAppearance->BorderSize = 0;
            this->edge31_32->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->edge31_32->Location = System::Drawing::Point(229, 291);
            this->edge31_32->Name = L"edge31_32";
            this->edge31_32->Size = System::Drawing::Size(22, 75);
            this->edge31_32->TabIndex = 6;
            this->edge31_32->UseVisualStyleBackColor = false;
            this->edge31_32->Click += gcnew System::EventHandler(this, &MyForm::edge31_32_Click);
            // 
            // edge51_52
            // 
            this->edge51_52->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->edge51_52->FlatAppearance->BorderSize = 0;
            this->edge51_52->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->edge51_52->Location = System::Drawing::Point(228, 483);
            this->edge51_52->Name = L"edge51_52";
            this->edge51_52->Size = System::Drawing::Size(22, 75);
            this->edge51_52->TabIndex = 6;
            this->edge51_52->UseVisualStyleBackColor = false;
            this->edge51_52->Click += gcnew System::EventHandler(this, &MyForm::edge51_52_Click);
            // 
            // edge11_12
            // 
            this->edge11_12->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->edge11_12->FlatAppearance->BorderSize = 0;
            this->edge11_12->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->edge11_12->Location = System::Drawing::Point(230, 99);
            this->edge11_12->Name = L"edge11_12";
            this->edge11_12->Size = System::Drawing::Size(22, 75);
            this->edge11_12->TabIndex = 6;
            this->edge11_12->UseVisualStyleBackColor = false;
            this->edge11_12->Click += gcnew System::EventHandler(this, &MyForm::edge11_12_Click);
            // 
            // edge98_99
            // 
            this->edge98_99->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->edge98_99->FlatAppearance->BorderSize = 0;
            this->edge98_99->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->edge98_99->Location = System::Drawing::Point(1055, 867);
            this->edge98_99->Name = L"edge98_99";
            this->edge98_99->Size = System::Drawing::Size(22, 75);
            this->edge98_99->TabIndex = 6;
            this->edge98_99->UseVisualStyleBackColor = false;
            this->edge98_99->Click += gcnew System::EventHandler(this, &MyForm::edge98_99_Click);
            // 
            // edge78_79
            // 
            this->edge78_79->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->edge78_79->FlatAppearance->BorderSize = 0;
            this->edge78_79->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->edge78_79->Location = System::Drawing::Point(1057, 675);
            this->edge78_79->Name = L"edge78_79";
            this->edge78_79->Size = System::Drawing::Size(22, 75);
            this->edge78_79->TabIndex = 6;
            this->edge78_79->UseVisualStyleBackColor = false;
            this->edge78_79->Click += gcnew System::EventHandler(this, &MyForm::edge78_79_Click);
            // 
            // edge38_39
            // 
            this->edge38_39->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->edge38_39->FlatAppearance->BorderSize = 0;
            this->edge38_39->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->edge38_39->Location = System::Drawing::Point(1059, 291);
            this->edge38_39->Name = L"edge38_39";
            this->edge38_39->Size = System::Drawing::Size(22, 75);
            this->edge38_39->TabIndex = 6;
            this->edge38_39->UseVisualStyleBackColor = false;
            this->edge38_39->Click += gcnew System::EventHandler(this, &MyForm::edge38_39_Click);
            // 
            // edge58_59
            // 
            this->edge58_59->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->edge58_59->FlatAppearance->BorderSize = 0;
            this->edge58_59->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->edge58_59->Location = System::Drawing::Point(1058, 483);
            this->edge58_59->Name = L"edge58_59";
            this->edge58_59->Size = System::Drawing::Size(22, 75);
            this->edge58_59->TabIndex = 6;
            this->edge58_59->UseVisualStyleBackColor = false;
            this->edge58_59->Click += gcnew System::EventHandler(this, &MyForm::edge58_59_Click);
            // 
            // edge18_19
            // 
            this->edge18_19->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->edge18_19->FlatAppearance->BorderSize = 0;
            this->edge18_19->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->edge18_19->Location = System::Drawing::Point(1060, 99);
            this->edge18_19->Name = L"edge18_19";
            this->edge18_19->Size = System::Drawing::Size(22, 75);
            this->edge18_19->TabIndex = 6;
            this->edge18_19->UseVisualStyleBackColor = false;
            this->edge18_19->Click += gcnew System::EventHandler(this, &MyForm::edge18_19_Click);
            // 
            // edge96_97
            // 
            this->edge96_97->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->edge96_97->FlatAppearance->BorderSize = 0;
            this->edge96_97->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->edge96_97->Location = System::Drawing::Point(818, 867);
            this->edge96_97->Name = L"edge96_97";
            this->edge96_97->Size = System::Drawing::Size(22, 75);
            this->edge96_97->TabIndex = 6;
            this->edge96_97->UseVisualStyleBackColor = false;
            this->edge96_97->Click += gcnew System::EventHandler(this, &MyForm::edge96_97_Click);
            // 
            // edge76_77
            // 
            this->edge76_77->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->edge76_77->FlatAppearance->BorderSize = 0;
            this->edge76_77->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->edge76_77->Location = System::Drawing::Point(820, 675);
            this->edge76_77->Name = L"edge76_77";
            this->edge76_77->Size = System::Drawing::Size(22, 75);
            this->edge76_77->TabIndex = 6;
            this->edge76_77->UseVisualStyleBackColor = false;
            this->edge76_77->Click += gcnew System::EventHandler(this, &MyForm::edge76_77_Click);
            // 
            // edge36_37
            // 
            this->edge36_37->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->edge36_37->FlatAppearance->BorderSize = 0;
            this->edge36_37->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->edge36_37->Location = System::Drawing::Point(822, 291);
            this->edge36_37->Name = L"edge36_37";
            this->edge36_37->Size = System::Drawing::Size(22, 75);
            this->edge36_37->TabIndex = 6;
            this->edge36_37->UseVisualStyleBackColor = false;
            this->edge36_37->Click += gcnew System::EventHandler(this, &MyForm::edge36_37_Click);
            // 
            // edge56_57
            // 
            this->edge56_57->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->edge56_57->FlatAppearance->BorderSize = 0;
            this->edge56_57->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->edge56_57->Location = System::Drawing::Point(821, 483);
            this->edge56_57->Name = L"edge56_57";
            this->edge56_57->Size = System::Drawing::Size(22, 75);
            this->edge56_57->TabIndex = 6;
            this->edge56_57->UseVisualStyleBackColor = false;
            this->edge56_57->Click += gcnew System::EventHandler(this, &MyForm::edge56_57_Click);
            // 
            // edge16_17
            // 
            this->edge16_17->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->edge16_17->FlatAppearance->BorderSize = 0;
            this->edge16_17->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->edge16_17->Location = System::Drawing::Point(823, 99);
            this->edge16_17->Name = L"edge16_17";
            this->edge16_17->Size = System::Drawing::Size(22, 75);
            this->edge16_17->TabIndex = 6;
            this->edge16_17->UseVisualStyleBackColor = false;
            this->edge16_17->Click += gcnew System::EventHandler(this, &MyForm::edge16_17_Click);
            // 
            // edge92_93
            // 
            this->edge92_93->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->edge92_93->FlatAppearance->BorderSize = 0;
            this->edge92_93->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->edge92_93->Location = System::Drawing::Point(344, 867);
            this->edge92_93->Name = L"edge92_93";
            this->edge92_93->Size = System::Drawing::Size(22, 75);
            this->edge92_93->TabIndex = 6;
            this->edge92_93->UseVisualStyleBackColor = false;
            this->edge92_93->Click += gcnew System::EventHandler(this, &MyForm::edge92_93_Click);
            // 
            // edge72_73
            // 
            this->edge72_73->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->edge72_73->FlatAppearance->BorderSize = 0;
            this->edge72_73->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->edge72_73->Location = System::Drawing::Point(346, 675);
            this->edge72_73->Name = L"edge72_73";
            this->edge72_73->Size = System::Drawing::Size(22, 75);
            this->edge72_73->TabIndex = 6;
            this->edge72_73->UseVisualStyleBackColor = false;
            this->edge72_73->Click += gcnew System::EventHandler(this, &MyForm::edge72_73_Click);
            // 
            // edge32_33
            // 
            this->edge32_33->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->edge32_33->FlatAppearance->BorderSize = 0;
            this->edge32_33->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->edge32_33->Location = System::Drawing::Point(348, 291);
            this->edge32_33->Name = L"edge32_33";
            this->edge32_33->Size = System::Drawing::Size(22, 75);
            this->edge32_33->TabIndex = 6;
            this->edge32_33->UseVisualStyleBackColor = false;
            this->edge32_33->Click += gcnew System::EventHandler(this, &MyForm::edge32_33_Click);
            // 
            // edge52_53
            // 
            this->edge52_53->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->edge52_53->FlatAppearance->BorderSize = 0;
            this->edge52_53->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->edge52_53->Location = System::Drawing::Point(347, 483);
            this->edge52_53->Name = L"edge52_53";
            this->edge52_53->Size = System::Drawing::Size(22, 75);
            this->edge52_53->TabIndex = 6;
            this->edge52_53->UseVisualStyleBackColor = false;
            this->edge52_53->Click += gcnew System::EventHandler(this, &MyForm::edge52_53_Click);
            // 
            // edge12_13
            // 
            this->edge12_13->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->edge12_13->FlatAppearance->BorderSize = 0;
            this->edge12_13->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->edge12_13->Location = System::Drawing::Point(349, 99);
            this->edge12_13->Name = L"edge12_13";
            this->edge12_13->Size = System::Drawing::Size(22, 75);
            this->edge12_13->TabIndex = 6;
            this->edge12_13->UseVisualStyleBackColor = false;
            this->edge12_13->Click += gcnew System::EventHandler(this, &MyForm::edge12_13_Click);
            // 
            // edge94_95
            // 
            this->edge94_95->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->edge94_95->FlatAppearance->BorderSize = 0;
            this->edge94_95->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->edge94_95->Location = System::Drawing::Point(581, 867);
            this->edge94_95->Name = L"edge94_95";
            this->edge94_95->Size = System::Drawing::Size(22, 75);
            this->edge94_95->TabIndex = 6;
            this->edge94_95->UseVisualStyleBackColor = false;
            this->edge94_95->Click += gcnew System::EventHandler(this, &MyForm::edge94_95_Click);
            // 
            // edge74_75
            // 
            this->edge74_75->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->edge74_75->FlatAppearance->BorderSize = 0;
            this->edge74_75->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->edge74_75->Location = System::Drawing::Point(583, 675);
            this->edge74_75->Name = L"edge74_75";
            this->edge74_75->Size = System::Drawing::Size(22, 75);
            this->edge74_75->TabIndex = 6;
            this->edge74_75->UseVisualStyleBackColor = false;
            this->edge74_75->Click += gcnew System::EventHandler(this, &MyForm::edge74_75_Click);
            // 
            // edge34_35
            // 
            this->edge34_35->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->edge34_35->FlatAppearance->BorderSize = 0;
            this->edge34_35->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->edge34_35->Location = System::Drawing::Point(585, 291);
            this->edge34_35->Name = L"edge34_35";
            this->edge34_35->Size = System::Drawing::Size(22, 75);
            this->edge34_35->TabIndex = 6;
            this->edge34_35->UseVisualStyleBackColor = false;
            this->edge34_35->Click += gcnew System::EventHandler(this, &MyForm::edge34_35_Click);
            // 
            // edge54_55
            // 
            this->edge54_55->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->edge54_55->FlatAppearance->BorderSize = 0;
            this->edge54_55->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->edge54_55->Location = System::Drawing::Point(584, 483);
            this->edge54_55->Name = L"edge54_55";
            this->edge54_55->Size = System::Drawing::Size(22, 75);
            this->edge54_55->TabIndex = 6;
            this->edge54_55->UseVisualStyleBackColor = false;
            this->edge54_55->Click += gcnew System::EventHandler(this, &MyForm::edge54_55_Click);
            // 
            // edge14_15
            // 
            this->edge14_15->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->edge14_15->FlatAppearance->BorderSize = 0;
            this->edge14_15->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->edge14_15->Location = System::Drawing::Point(586, 99);
            this->edge14_15->Name = L"edge14_15";
            this->edge14_15->Size = System::Drawing::Size(22, 75);
            this->edge14_15->TabIndex = 6;
            this->edge14_15->UseVisualStyleBackColor = false;
            this->edge14_15->Click += gcnew System::EventHandler(this, &MyForm::edge14_15_Click);
            // 
            // edge90_91
            // 
            this->edge90_91->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->edge90_91->FlatAppearance->BorderSize = 0;
            this->edge90_91->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->edge90_91->Location = System::Drawing::Point(107, 867);
            this->edge90_91->Name = L"edge90_91";
            this->edge90_91->Size = System::Drawing::Size(22, 75);
            this->edge90_91->TabIndex = 6;
            this->edge90_91->UseVisualStyleBackColor = false;
            this->edge90_91->Click += gcnew System::EventHandler(this, &MyForm::edge90_91_Click);
            // 
            // edge70_71
            // 
            this->edge70_71->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->edge70_71->FlatAppearance->BorderSize = 0;
            this->edge70_71->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->edge70_71->Location = System::Drawing::Point(109, 675);
            this->edge70_71->Name = L"edge70_71";
            this->edge70_71->Size = System::Drawing::Size(22, 75);
            this->edge70_71->TabIndex = 6;
            this->edge70_71->UseVisualStyleBackColor = false;
            this->edge70_71->Click += gcnew System::EventHandler(this, &MyForm::edge70_71_Click);
            // 
            // edge30_31
            // 
            this->edge30_31->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->edge30_31->FlatAppearance->BorderSize = 0;
            this->edge30_31->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->edge30_31->Location = System::Drawing::Point(111, 291);
            this->edge30_31->Name = L"edge30_31";
            this->edge30_31->Size = System::Drawing::Size(22, 75);
            this->edge30_31->TabIndex = 6;
            this->edge30_31->UseVisualStyleBackColor = false;
            this->edge30_31->Click += gcnew System::EventHandler(this, &MyForm::edge30_31_Click);
            // 
            // edge50_51
            // 
            this->edge50_51->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->edge50_51->FlatAppearance->BorderSize = 0;
            this->edge50_51->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->edge50_51->Location = System::Drawing::Point(110, 483);
            this->edge50_51->Name = L"edge50_51";
            this->edge50_51->Size = System::Drawing::Size(22, 75);
            this->edge50_51->TabIndex = 6;
            this->edge50_51->UseVisualStyleBackColor = false;
            this->edge50_51->Click += gcnew System::EventHandler(this, &MyForm::edge50_51_Click);
            // 
            // edge10_11
            // 
            this->edge10_11->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->edge10_11->FlatAppearance->BorderSize = 0;
            this->edge10_11->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->edge10_11->Location = System::Drawing::Point(112, 99);
            this->edge10_11->Name = L"edge10_11";
            this->edge10_11->Size = System::Drawing::Size(22, 75);
            this->edge10_11->TabIndex = 6;
            this->edge10_11->UseVisualStyleBackColor = false;
            this->edge10_11->Click += gcnew System::EventHandler(this, &MyForm::edge10_11_Click);
            // 
            // cell99
            // 
            this->cell99->BackColor = System::Drawing::Color::Black;
            this->cell99->FlatAppearance->BorderSize = 0;
            this->cell99->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->cell99->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->cell99->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
            this->cell99->Location = System::Drawing::Point(1079, 866);
            this->cell99->Name = L"cell99";
            this->cell99->Size = System::Drawing::Size(92, 75);
            this->cell99->TabIndex = 5;
            this->cell99->Text = L"99";
            this->cell99->UseVisualStyleBackColor = false;
            // 
            // cell79
            // 
            this->cell79->BackColor = System::Drawing::Color::Black;
            this->cell79->FlatAppearance->BorderSize = 0;
            this->cell79->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->cell79->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->cell79->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
            this->cell79->Location = System::Drawing::Point(1081, 674);
            this->cell79->Name = L"cell79";
            this->cell79->Size = System::Drawing::Size(92, 75);
            this->cell79->TabIndex = 5;
            this->cell79->Text = L"79";
            this->cell79->UseVisualStyleBackColor = false;
            // 
            // cell39
            // 
            this->cell39->BackColor = System::Drawing::Color::Black;
            this->cell39->FlatAppearance->BorderSize = 0;
            this->cell39->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->cell39->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->cell39->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
            this->cell39->Location = System::Drawing::Point(1083, 290);
            this->cell39->Name = L"cell39";
            this->cell39->Size = System::Drawing::Size(92, 75);
            this->cell39->TabIndex = 5;
            this->cell39->Text = L"39";
            this->cell39->UseVisualStyleBackColor = false;
            // 
            // cell97
            // 
            this->cell97->BackColor = System::Drawing::Color::Black;
            this->cell97->FlatAppearance->BorderSize = 0;
            this->cell97->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->cell97->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->cell97->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
            this->cell97->Location = System::Drawing::Point(842, 866);
            this->cell97->Name = L"cell97";
            this->cell97->Size = System::Drawing::Size(92, 75);
            this->cell97->TabIndex = 5;
            this->cell97->Text = L"97";
            this->cell97->UseVisualStyleBackColor = false;
            // 
            // cell77
            // 
            this->cell77->BackColor = System::Drawing::Color::Black;
            this->cell77->FlatAppearance->BorderSize = 0;
            this->cell77->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->cell77->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->cell77->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
            this->cell77->Location = System::Drawing::Point(844, 674);
            this->cell77->Name = L"cell77";
            this->cell77->Size = System::Drawing::Size(92, 75);
            this->cell77->TabIndex = 5;
            this->cell77->Text = L"77";
            this->cell77->UseVisualStyleBackColor = false;
            // 
            // cell37
            // 
            this->cell37->BackColor = System::Drawing::Color::Black;
            this->cell37->FlatAppearance->BorderSize = 0;
            this->cell37->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->cell37->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->cell37->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
            this->cell37->Location = System::Drawing::Point(846, 290);
            this->cell37->Name = L"cell37";
            this->cell37->Size = System::Drawing::Size(92, 75);
            this->cell37->TabIndex = 5;
            this->cell37->Text = L"37";
            this->cell37->UseVisualStyleBackColor = false;
            // 
            // cell59
            // 
            this->cell59->BackColor = System::Drawing::Color::Black;
            this->cell59->FlatAppearance->BorderSize = 0;
            this->cell59->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->cell59->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->cell59->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
            this->cell59->Location = System::Drawing::Point(1082, 482);
            this->cell59->Name = L"cell59";
            this->cell59->Size = System::Drawing::Size(92, 75);
            this->cell59->TabIndex = 5;
            this->cell59->Text = L"59";
            this->cell59->UseVisualStyleBackColor = false;
            // 
            // cell19
            // 
            this->cell19->BackColor = System::Drawing::Color::Black;
            this->cell19->FlatAppearance->BorderSize = 0;
            this->cell19->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->cell19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->cell19->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
            this->cell19->Location = System::Drawing::Point(1084, 98);
            this->cell19->Name = L"cell19";
            this->cell19->Size = System::Drawing::Size(92, 75);
            this->cell19->TabIndex = 5;
            this->cell19->Text = L"19";
            this->cell19->UseVisualStyleBackColor = false;
            // 
            // cell93
            // 
            this->cell93->BackColor = System::Drawing::Color::Black;
            this->cell93->FlatAppearance->BorderSize = 0;
            this->cell93->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->cell93->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->cell93->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
            this->cell93->Location = System::Drawing::Point(368, 866);
            this->cell93->Name = L"cell93";
            this->cell93->Size = System::Drawing::Size(92, 75);
            this->cell93->TabIndex = 5;
            this->cell93->Text = L"93";
            this->cell93->UseVisualStyleBackColor = false;
            // 
            // cell73
            // 
            this->cell73->BackColor = System::Drawing::Color::Black;
            this->cell73->FlatAppearance->BorderSize = 0;
            this->cell73->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->cell73->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->cell73->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
            this->cell73->Location = System::Drawing::Point(370, 674);
            this->cell73->Name = L"cell73";
            this->cell73->Size = System::Drawing::Size(92, 75);
            this->cell73->TabIndex = 5;
            this->cell73->Text = L"73";
            this->cell73->UseVisualStyleBackColor = false;
            // 
            // cell33
            // 
            this->cell33->BackColor = System::Drawing::Color::Black;
            this->cell33->FlatAppearance->BorderSize = 0;
            this->cell33->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->cell33->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->cell33->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
            this->cell33->Location = System::Drawing::Point(372, 290);
            this->cell33->Name = L"cell33";
            this->cell33->Size = System::Drawing::Size(92, 75);
            this->cell33->TabIndex = 5;
            this->cell33->Text = L"33";
            this->cell33->UseVisualStyleBackColor = false;
            // 
            // cell57
            // 
            this->cell57->BackColor = System::Drawing::Color::Black;
            this->cell57->FlatAppearance->BorderSize = 0;
            this->cell57->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->cell57->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->cell57->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
            this->cell57->Location = System::Drawing::Point(845, 482);
            this->cell57->Name = L"cell57";
            this->cell57->Size = System::Drawing::Size(92, 75);
            this->cell57->TabIndex = 5;
            this->cell57->Text = L"57";
            this->cell57->UseVisualStyleBackColor = false;
            // 
            // cell17
            // 
            this->cell17->BackColor = System::Drawing::Color::Black;
            this->cell17->FlatAppearance->BorderSize = 0;
            this->cell17->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->cell17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->cell17->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
            this->cell17->Location = System::Drawing::Point(847, 98);
            this->cell17->Name = L"cell17";
            this->cell17->Size = System::Drawing::Size(92, 75);
            this->cell17->TabIndex = 5;
            this->cell17->Text = L"17";
            this->cell17->UseVisualStyleBackColor = false;
            // 
            // cell95
            // 
            this->cell95->BackColor = System::Drawing::Color::Black;
            this->cell95->FlatAppearance->BorderSize = 0;
            this->cell95->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->cell95->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->cell95->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
            this->cell95->Location = System::Drawing::Point(605, 866);
            this->cell95->Name = L"cell95";
            this->cell95->Size = System::Drawing::Size(92, 75);
            this->cell95->TabIndex = 5;
            this->cell95->Text = L"95";
            this->cell95->UseVisualStyleBackColor = false;
            // 
            // cell75
            // 
            this->cell75->BackColor = System::Drawing::Color::Black;
            this->cell75->FlatAppearance->BorderSize = 0;
            this->cell75->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->cell75->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->cell75->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
            this->cell75->Location = System::Drawing::Point(607, 674);
            this->cell75->Name = L"cell75";
            this->cell75->Size = System::Drawing::Size(92, 75);
            this->cell75->TabIndex = 5;
            this->cell75->Text = L"75";
            this->cell75->UseVisualStyleBackColor = false;
            // 
            // cell35
            // 
            this->cell35->BackColor = System::Drawing::Color::Black;
            this->cell35->FlatAppearance->BorderSize = 0;
            this->cell35->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->cell35->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->cell35->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
            this->cell35->Location = System::Drawing::Point(609, 290);
            this->cell35->Name = L"cell35";
            this->cell35->Size = System::Drawing::Size(92, 75);
            this->cell35->TabIndex = 5;
            this->cell35->Text = L"35";
            this->cell35->UseVisualStyleBackColor = false;
            // 
            // cell53
            // 
            this->cell53->BackColor = System::Drawing::Color::Black;
            this->cell53->FlatAppearance->BorderSize = 0;
            this->cell53->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->cell53->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->cell53->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
            this->cell53->Location = System::Drawing::Point(371, 482);
            this->cell53->Name = L"cell53";
            this->cell53->Size = System::Drawing::Size(92, 75);
            this->cell53->TabIndex = 5;
            this->cell53->Text = L"53";
            this->cell53->UseVisualStyleBackColor = false;
            // 
            // cell13
            // 
            this->cell13->BackColor = System::Drawing::Color::Black;
            this->cell13->FlatAppearance->BorderSize = 0;
            this->cell13->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->cell13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->cell13->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
            this->cell13->Location = System::Drawing::Point(373, 98);
            this->cell13->Name = L"cell13";
            this->cell13->Size = System::Drawing::Size(92, 75);
            this->cell13->TabIndex = 5;
            this->cell13->Text = L"13";
            this->cell13->UseVisualStyleBackColor = false;
            // 
            // cell98
            // 
            this->cell98->BackColor = System::Drawing::Color::Black;
            this->cell98->FlatAppearance->BorderSize = 0;
            this->cell98->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->cell98->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->cell98->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
            this->cell98->Location = System::Drawing::Point(961, 866);
            this->cell98->Name = L"cell98";
            this->cell98->Size = System::Drawing::Size(92, 75);
            this->cell98->TabIndex = 5;
            this->cell98->Text = L"98";
            this->cell98->UseVisualStyleBackColor = false;
            // 
            // cell78
            // 
            this->cell78->BackColor = System::Drawing::Color::Black;
            this->cell78->FlatAppearance->BorderSize = 0;
            this->cell78->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->cell78->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->cell78->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
            this->cell78->Location = System::Drawing::Point(963, 674);
            this->cell78->Name = L"cell78";
            this->cell78->Size = System::Drawing::Size(92, 75);
            this->cell78->TabIndex = 5;
            this->cell78->Text = L"78";
            this->cell78->UseVisualStyleBackColor = false;
            // 
            // cell38
            // 
            this->cell38->BackColor = System::Drawing::Color::Black;
            this->cell38->FlatAppearance->BorderSize = 0;
            this->cell38->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->cell38->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->cell38->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
            this->cell38->Location = System::Drawing::Point(965, 290);
            this->cell38->Name = L"cell38";
            this->cell38->Size = System::Drawing::Size(92, 75);
            this->cell38->TabIndex = 5;
            this->cell38->Text = L"38";
            this->cell38->UseVisualStyleBackColor = false;
            // 
            // cell55
            // 
            this->cell55->BackColor = System::Drawing::Color::Black;
            this->cell55->FlatAppearance->BorderSize = 0;
            this->cell55->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->cell55->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->cell55->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
            this->cell55->Location = System::Drawing::Point(608, 482);
            this->cell55->Name = L"cell55";
            this->cell55->Size = System::Drawing::Size(92, 75);
            this->cell55->TabIndex = 5;
            this->cell55->Text = L"55";
            this->cell55->UseVisualStyleBackColor = false;
            // 
            // cell15
            // 
            this->cell15->BackColor = System::Drawing::Color::Black;
            this->cell15->FlatAppearance->BorderSize = 0;
            this->cell15->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->cell15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->cell15->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
            this->cell15->Location = System::Drawing::Point(610, 98);
            this->cell15->Name = L"cell15";
            this->cell15->Size = System::Drawing::Size(92, 75);
            this->cell15->TabIndex = 5;
            this->cell15->Text = L"15";
            this->cell15->UseVisualStyleBackColor = false;
            // 
            // cell91
            // 
            this->cell91->BackColor = System::Drawing::Color::Black;
            this->cell91->FlatAppearance->BorderSize = 0;
            this->cell91->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->cell91->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->cell91->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
            this->cell91->Location = System::Drawing::Point(131, 866);
            this->cell91->Name = L"cell91";
            this->cell91->Size = System::Drawing::Size(92, 75);
            this->cell91->TabIndex = 5;
            this->cell91->Text = L"91";
            this->cell91->UseVisualStyleBackColor = false;
            // 
            // cell71
            // 
            this->cell71->BackColor = System::Drawing::Color::Black;
            this->cell71->FlatAppearance->BorderSize = 0;
            this->cell71->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->cell71->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->cell71->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
            this->cell71->Location = System::Drawing::Point(133, 674);
            this->cell71->Name = L"cell71";
            this->cell71->Size = System::Drawing::Size(92, 75);
            this->cell71->TabIndex = 5;
            this->cell71->Text = L"71";
            this->cell71->UseVisualStyleBackColor = false;
            // 
            // cell31
            // 
            this->cell31->BackColor = System::Drawing::Color::Black;
            this->cell31->FlatAppearance->BorderSize = 0;
            this->cell31->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->cell31->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->cell31->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
            this->cell31->Location = System::Drawing::Point(135, 290);
            this->cell31->Name = L"cell31";
            this->cell31->Size = System::Drawing::Size(92, 75);
            this->cell31->TabIndex = 5;
            this->cell31->Text = L"31";
            this->cell31->UseVisualStyleBackColor = false;
            // 
            // cell58
            // 
            this->cell58->BackColor = System::Drawing::Color::Black;
            this->cell58->FlatAppearance->BorderSize = 0;
            this->cell58->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->cell58->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->cell58->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
            this->cell58->Location = System::Drawing::Point(964, 482);
            this->cell58->Name = L"cell58";
            this->cell58->Size = System::Drawing::Size(92, 75);
            this->cell58->TabIndex = 5;
            this->cell58->Text = L"58";
            this->cell58->UseVisualStyleBackColor = false;
            // 
            // cell18
            // 
            this->cell18->BackColor = System::Drawing::Color::Black;
            this->cell18->FlatAppearance->BorderSize = 0;
            this->cell18->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->cell18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->cell18->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
            this->cell18->Location = System::Drawing::Point(966, 98);
            this->cell18->Name = L"cell18";
            this->cell18->Size = System::Drawing::Size(92, 75);
            this->cell18->TabIndex = 5;
            this->cell18->Text = L"18";
            this->cell18->UseVisualStyleBackColor = false;
            // 
            // cell96
            // 
            this->cell96->BackColor = System::Drawing::Color::Black;
            this->cell96->FlatAppearance->BorderSize = 0;
            this->cell96->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->cell96->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->cell96->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
            this->cell96->Location = System::Drawing::Point(724, 866);
            this->cell96->Name = L"cell96";
            this->cell96->Size = System::Drawing::Size(92, 75);
            this->cell96->TabIndex = 5;
            this->cell96->Text = L"96";
            this->cell96->UseVisualStyleBackColor = false;
            // 
            // cell76
            // 
            this->cell76->BackColor = System::Drawing::Color::Black;
            this->cell76->FlatAppearance->BorderSize = 0;
            this->cell76->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->cell76->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->cell76->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
            this->cell76->Location = System::Drawing::Point(726, 674);
            this->cell76->Name = L"cell76";
            this->cell76->Size = System::Drawing::Size(92, 75);
            this->cell76->TabIndex = 5;
            this->cell76->Text = L"76";
            this->cell76->UseVisualStyleBackColor = false;
            // 
            // cell36
            // 
            this->cell36->BackColor = System::Drawing::Color::Black;
            this->cell36->FlatAppearance->BorderSize = 0;
            this->cell36->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->cell36->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->cell36->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
            this->cell36->Location = System::Drawing::Point(728, 290);
            this->cell36->Name = L"cell36";
            this->cell36->Size = System::Drawing::Size(92, 75);
            this->cell36->TabIndex = 5;
            this->cell36->Text = L"36";
            this->cell36->UseVisualStyleBackColor = false;
            // 
            // cell51
            // 
            this->cell51->BackColor = System::Drawing::Color::Black;
            this->cell51->FlatAppearance->BorderSize = 0;
            this->cell51->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->cell51->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->cell51->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
            this->cell51->Location = System::Drawing::Point(134, 482);
            this->cell51->Name = L"cell51";
            this->cell51->Size = System::Drawing::Size(92, 75);
            this->cell51->TabIndex = 5;
            this->cell51->Text = L"51";
            this->cell51->UseVisualStyleBackColor = false;
            // 
            // cell11
            // 
            this->cell11->BackColor = System::Drawing::Color::Black;
            this->cell11->FlatAppearance->BorderSize = 0;
            this->cell11->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->cell11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->cell11->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
            this->cell11->Location = System::Drawing::Point(136, 98);
            this->cell11->Name = L"cell11";
            this->cell11->Size = System::Drawing::Size(92, 75);
            this->cell11->TabIndex = 5;
            this->cell11->Text = L"11";
            this->cell11->UseVisualStyleBackColor = false;
            // 
            // cell92
            // 
            this->cell92->BackColor = System::Drawing::Color::Black;
            this->cell92->FlatAppearance->BorderSize = 0;
            this->cell92->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->cell92->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->cell92->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
            this->cell92->Location = System::Drawing::Point(250, 866);
            this->cell92->Name = L"cell92";
            this->cell92->Size = System::Drawing::Size(92, 75);
            this->cell92->TabIndex = 5;
            this->cell92->Text = L"92";
            this->cell92->UseVisualStyleBackColor = false;
            // 
            // cell72
            // 
            this->cell72->BackColor = System::Drawing::Color::Black;
            this->cell72->FlatAppearance->BorderSize = 0;
            this->cell72->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->cell72->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->cell72->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
            this->cell72->Location = System::Drawing::Point(252, 674);
            this->cell72->Name = L"cell72";
            this->cell72->Size = System::Drawing::Size(92, 75);
            this->cell72->TabIndex = 5;
            this->cell72->Text = L"72";
            this->cell72->UseVisualStyleBackColor = false;
            // 
            // cell32
            // 
            this->cell32->BackColor = System::Drawing::Color::Black;
            this->cell32->FlatAppearance->BorderSize = 0;
            this->cell32->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->cell32->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->cell32->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
            this->cell32->Location = System::Drawing::Point(254, 290);
            this->cell32->Name = L"cell32";
            this->cell32->Size = System::Drawing::Size(92, 75);
            this->cell32->TabIndex = 5;
            this->cell32->Text = L"32";
            this->cell32->UseVisualStyleBackColor = false;
            // 
            // cell56
            // 
            this->cell56->BackColor = System::Drawing::Color::Black;
            this->cell56->FlatAppearance->BorderSize = 0;
            this->cell56->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->cell56->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->cell56->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
            this->cell56->Location = System::Drawing::Point(727, 482);
            this->cell56->Name = L"cell56";
            this->cell56->Size = System::Drawing::Size(92, 75);
            this->cell56->TabIndex = 5;
            this->cell56->Text = L"56";
            this->cell56->UseVisualStyleBackColor = false;
            // 
            // cell16
            // 
            this->cell16->BackColor = System::Drawing::Color::Black;
            this->cell16->FlatAppearance->BorderSize = 0;
            this->cell16->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->cell16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->cell16->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
            this->cell16->Location = System::Drawing::Point(729, 98);
            this->cell16->Name = L"cell16";
            this->cell16->Size = System::Drawing::Size(92, 75);
            this->cell16->TabIndex = 5;
            this->cell16->Text = L"16";
            this->cell16->UseVisualStyleBackColor = false;
            // 
            // cell94
            // 
            this->cell94->BackColor = System::Drawing::Color::Black;
            this->cell94->FlatAppearance->BorderSize = 0;
            this->cell94->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->cell94->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->cell94->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
            this->cell94->Location = System::Drawing::Point(487, 866);
            this->cell94->Name = L"cell94";
            this->cell94->Size = System::Drawing::Size(92, 75);
            this->cell94->TabIndex = 5;
            this->cell94->Text = L"94";
            this->cell94->UseVisualStyleBackColor = false;
            // 
            // cell74
            // 
            this->cell74->BackColor = System::Drawing::Color::Black;
            this->cell74->FlatAppearance->BorderSize = 0;
            this->cell74->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->cell74->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->cell74->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
            this->cell74->Location = System::Drawing::Point(489, 674);
            this->cell74->Name = L"cell74";
            this->cell74->Size = System::Drawing::Size(92, 75);
            this->cell74->TabIndex = 5;
            this->cell74->Text = L"74";
            this->cell74->UseVisualStyleBackColor = false;
            // 
            // cell34
            // 
            this->cell34->BackColor = System::Drawing::Color::Black;
            this->cell34->FlatAppearance->BorderSize = 0;
            this->cell34->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->cell34->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->cell34->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
            this->cell34->Location = System::Drawing::Point(491, 290);
            this->cell34->Name = L"cell34";
            this->cell34->Size = System::Drawing::Size(92, 75);
            this->cell34->TabIndex = 5;
            this->cell34->Text = L"34";
            this->cell34->UseVisualStyleBackColor = false;
            // 
            // cell52
            // 
            this->cell52->BackColor = System::Drawing::Color::Black;
            this->cell52->FlatAppearance->BorderSize = 0;
            this->cell52->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->cell52->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->cell52->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
            this->cell52->Location = System::Drawing::Point(253, 482);
            this->cell52->Name = L"cell52";
            this->cell52->Size = System::Drawing::Size(92, 75);
            this->cell52->TabIndex = 5;
            this->cell52->Text = L"52";
            this->cell52->UseVisualStyleBackColor = false;
            // 
            // cell12
            // 
            this->cell12->BackColor = System::Drawing::Color::Black;
            this->cell12->FlatAppearance->BorderSize = 0;
            this->cell12->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->cell12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->cell12->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
            this->cell12->Location = System::Drawing::Point(255, 98);
            this->cell12->Name = L"cell12";
            this->cell12->Size = System::Drawing::Size(92, 75);
            this->cell12->TabIndex = 5;
            this->cell12->Text = L"12";
            this->cell12->UseVisualStyleBackColor = false;
            // 
            // edge89_99
            // 
            this->edge89_99->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->edge89_99->FlatAppearance->BorderSize = 0;
            this->edge89_99->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->edge89_99->Location = System::Drawing::Point(1080, 846);
            this->edge89_99->Name = L"edge89_99";
            this->edge89_99->Size = System::Drawing::Size(92, 18);
            this->edge89_99->TabIndex = 4;
            this->edge89_99->UseVisualStyleBackColor = false;
            this->edge89_99->Click += gcnew System::EventHandler(this, &MyForm::edge89_99_Click);
            // 
            // edge69_79
            // 
            this->edge69_79->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->edge69_79->FlatAppearance->BorderSize = 0;
            this->edge69_79->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->edge69_79->Location = System::Drawing::Point(1082, 654);
            this->edge69_79->Name = L"edge69_79";
            this->edge69_79->Size = System::Drawing::Size(92, 18);
            this->edge69_79->TabIndex = 4;
            this->edge69_79->UseVisualStyleBackColor = false;
            this->edge69_79->Click += gcnew System::EventHandler(this, &MyForm::edge69_79_Click);
            // 
            // edge29_39
            // 
            this->edge29_39->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->edge29_39->FlatAppearance->BorderSize = 0;
            this->edge29_39->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->edge29_39->Location = System::Drawing::Point(1084, 270);
            this->edge29_39->Name = L"edge29_39";
            this->edge29_39->Size = System::Drawing::Size(92, 18);
            this->edge29_39->TabIndex = 4;
            this->edge29_39->UseVisualStyleBackColor = false;
            this->edge29_39->Click += gcnew System::EventHandler(this, &MyForm::edge29_39_Click);
            // 
            // cell54
            // 
            this->cell54->BackColor = System::Drawing::Color::Black;
            this->cell54->FlatAppearance->BorderSize = 0;
            this->cell54->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->cell54->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->cell54->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
            this->cell54->Location = System::Drawing::Point(490, 482);
            this->cell54->Name = L"cell54";
            this->cell54->Size = System::Drawing::Size(92, 75);
            this->cell54->TabIndex = 5;
            this->cell54->Text = L"54";
            this->cell54->UseVisualStyleBackColor = false;
            // 
            // cell14
            // 
            this->cell14->BackColor = System::Drawing::Color::Black;
            this->cell14->FlatAppearance->BorderSize = 0;
            this->cell14->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->cell14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->cell14->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
            this->cell14->Location = System::Drawing::Point(492, 98);
            this->cell14->Name = L"cell14";
            this->cell14->Size = System::Drawing::Size(92, 75);
            this->cell14->TabIndex = 5;
            this->cell14->Text = L"14";
            this->cell14->UseVisualStyleBackColor = false;
            // 
            // cell90
            // 
            this->cell90->BackColor = System::Drawing::Color::Black;
            this->cell90->FlatAppearance->BorderSize = 0;
            this->cell90->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->cell90->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->cell90->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
            this->cell90->Location = System::Drawing::Point(13, 866);
            this->cell90->Name = L"cell90";
            this->cell90->Size = System::Drawing::Size(92, 75);
            this->cell90->TabIndex = 5;
            this->cell90->Text = L"90";
            this->cell90->UseVisualStyleBackColor = false;
            // 
            // cell70
            // 
            this->cell70->BackColor = System::Drawing::Color::Black;
            this->cell70->FlatAppearance->BorderSize = 0;
            this->cell70->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->cell70->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->cell70->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
            this->cell70->Location = System::Drawing::Point(15, 674);
            this->cell70->Name = L"cell70";
            this->cell70->Size = System::Drawing::Size(92, 75);
            this->cell70->TabIndex = 5;
            this->cell70->Text = L"70";
            this->cell70->UseVisualStyleBackColor = false;
            // 
            // cell30
            // 
            this->cell30->BackColor = System::Drawing::Color::Black;
            this->cell30->FlatAppearance->BorderSize = 0;
            this->cell30->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->cell30->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->cell30->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
            this->cell30->Location = System::Drawing::Point(17, 290);
            this->cell30->Name = L"cell30";
            this->cell30->Size = System::Drawing::Size(92, 75);
            this->cell30->TabIndex = 5;
            this->cell30->Text = L"30";
            this->cell30->UseVisualStyleBackColor = false;
            // 
            // edge49_59
            // 
            this->edge49_59->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->edge49_59->FlatAppearance->BorderSize = 0;
            this->edge49_59->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->edge49_59->Location = System::Drawing::Point(1083, 462);
            this->edge49_59->Name = L"edge49_59";
            this->edge49_59->Size = System::Drawing::Size(92, 18);
            this->edge49_59->TabIndex = 4;
            this->edge49_59->UseVisualStyleBackColor = false;
            this->edge49_59->Click += gcnew System::EventHandler(this, &MyForm::edge49_59_Click);
            // 
            // edge9_19
            // 
            this->edge9_19->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->edge9_19->FlatAppearance->BorderSize = 0;
            this->edge9_19->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->edge9_19->Location = System::Drawing::Point(1085, 78);
            this->edge9_19->Name = L"edge9_19";
            this->edge9_19->Size = System::Drawing::Size(92, 18);
            this->edge9_19->TabIndex = 4;
            this->edge9_19->UseVisualStyleBackColor = false;
            this->edge9_19->Click += gcnew System::EventHandler(this, &MyForm::edge9_19_Click);
            // 
            // edge87_97
            // 
            this->edge87_97->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->edge87_97->FlatAppearance->BorderSize = 0;
            this->edge87_97->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->edge87_97->Location = System::Drawing::Point(843, 846);
            this->edge87_97->Name = L"edge87_97";
            this->edge87_97->Size = System::Drawing::Size(92, 18);
            this->edge87_97->TabIndex = 4;
            this->edge87_97->UseVisualStyleBackColor = false;
            this->edge87_97->Click += gcnew System::EventHandler(this, &MyForm::edge87_97_Click);
            // 
            // edge67_77
            // 
            this->edge67_77->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->edge67_77->FlatAppearance->BorderSize = 0;
            this->edge67_77->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->edge67_77->Location = System::Drawing::Point(845, 654);
            this->edge67_77->Name = L"edge67_77";
            this->edge67_77->Size = System::Drawing::Size(92, 18);
            this->edge67_77->TabIndex = 4;
            this->edge67_77->UseVisualStyleBackColor = false;
            this->edge67_77->Click += gcnew System::EventHandler(this, &MyForm::edge67_77_Click);
            // 
            // edge27_37
            // 
            this->edge27_37->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->edge27_37->FlatAppearance->BorderSize = 0;
            this->edge27_37->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->edge27_37->Location = System::Drawing::Point(847, 270);
            this->edge27_37->Name = L"edge27_37";
            this->edge27_37->Size = System::Drawing::Size(92, 18);
            this->edge27_37->TabIndex = 4;
            this->edge27_37->UseVisualStyleBackColor = false;
            this->edge27_37->Click += gcnew System::EventHandler(this, &MyForm::edge27_37_Click);
            // 
            // cell50
            // 
            this->cell50->BackColor = System::Drawing::Color::Black;
            this->cell50->FlatAppearance->BorderSize = 0;
            this->cell50->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->cell50->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->cell50->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
            this->cell50->Location = System::Drawing::Point(16, 482);
            this->cell50->Name = L"cell50";
            this->cell50->Size = System::Drawing::Size(92, 75);
            this->cell50->TabIndex = 5;
            this->cell50->Text = L"50";
            this->cell50->UseVisualStyleBackColor = false;
            // 
            // cell10
            // 
            this->cell10->BackColor = System::Drawing::Color::Black;
            this->cell10->FlatAppearance->BorderSize = 0;
            this->cell10->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->cell10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->cell10->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
            this->cell10->Location = System::Drawing::Point(18, 98);
            this->cell10->Name = L"cell10";
            this->cell10->Size = System::Drawing::Size(92, 75);
            this->cell10->TabIndex = 5;
            this->cell10->Text = L"10";
            this->cell10->UseVisualStyleBackColor = false;
            // 
            // edge83_93
            // 
            this->edge83_93->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->edge83_93->FlatAppearance->BorderSize = 0;
            this->edge83_93->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->edge83_93->Location = System::Drawing::Point(369, 846);
            this->edge83_93->Name = L"edge83_93";
            this->edge83_93->Size = System::Drawing::Size(92, 18);
            this->edge83_93->TabIndex = 4;
            this->edge83_93->UseVisualStyleBackColor = false;
            this->edge83_93->Click += gcnew System::EventHandler(this, &MyForm::edge83_93_Click);
            // 
            // edge63_73
            // 
            this->edge63_73->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->edge63_73->FlatAppearance->BorderSize = 0;
            this->edge63_73->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->edge63_73->Location = System::Drawing::Point(371, 654);
            this->edge63_73->Name = L"edge63_73";
            this->edge63_73->Size = System::Drawing::Size(92, 18);
            this->edge63_73->TabIndex = 4;
            this->edge63_73->UseVisualStyleBackColor = false;
            this->edge63_73->Click += gcnew System::EventHandler(this, &MyForm::edge63_73_Click);
            // 
            // edge23_33
            // 
            this->edge23_33->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->edge23_33->FlatAppearance->BorderSize = 0;
            this->edge23_33->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->edge23_33->Location = System::Drawing::Point(373, 270);
            this->edge23_33->Name = L"edge23_33";
            this->edge23_33->Size = System::Drawing::Size(92, 18);
            this->edge23_33->TabIndex = 4;
            this->edge23_33->UseVisualStyleBackColor = false;
            this->edge23_33->Click += gcnew System::EventHandler(this, &MyForm::edge23_33_Click);
            // 
            // edge47_57
            // 
            this->edge47_57->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->edge47_57->FlatAppearance->BorderSize = 0;
            this->edge47_57->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->edge47_57->Location = System::Drawing::Point(846, 462);
            this->edge47_57->Name = L"edge47_57";
            this->edge47_57->Size = System::Drawing::Size(92, 18);
            this->edge47_57->TabIndex = 4;
            this->edge47_57->UseVisualStyleBackColor = false;
            this->edge47_57->Click += gcnew System::EventHandler(this, &MyForm::edge47_57_Click);
            // 
            // edge7_17
            // 
            this->edge7_17->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->edge7_17->FlatAppearance->BorderSize = 0;
            this->edge7_17->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->edge7_17->Location = System::Drawing::Point(848, 78);
            this->edge7_17->Name = L"edge7_17";
            this->edge7_17->Size = System::Drawing::Size(92, 18);
            this->edge7_17->TabIndex = 4;
            this->edge7_17->UseVisualStyleBackColor = false;
            this->edge7_17->Click += gcnew System::EventHandler(this, &MyForm::edge7_17_Click);
            // 
            // edge85_95
            // 
            this->edge85_95->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->edge85_95->FlatAppearance->BorderSize = 0;
            this->edge85_95->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->edge85_95->Location = System::Drawing::Point(606, 846);
            this->edge85_95->Name = L"edge85_95";
            this->edge85_95->Size = System::Drawing::Size(92, 18);
            this->edge85_95->TabIndex = 4;
            this->edge85_95->UseVisualStyleBackColor = false;
            this->edge85_95->Click += gcnew System::EventHandler(this, &MyForm::edge85_95_Click);
            // 
            // edge65_75
            // 
            this->edge65_75->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->edge65_75->FlatAppearance->BorderSize = 0;
            this->edge65_75->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->edge65_75->Location = System::Drawing::Point(608, 654);
            this->edge65_75->Name = L"edge65_75";
            this->edge65_75->Size = System::Drawing::Size(92, 18);
            this->edge65_75->TabIndex = 4;
            this->edge65_75->UseVisualStyleBackColor = false;
            this->edge65_75->Click += gcnew System::EventHandler(this, &MyForm::edge65_75_Click);
            // 
            // edge25_35
            // 
            this->edge25_35->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->edge25_35->FlatAppearance->BorderSize = 0;
            this->edge25_35->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->edge25_35->Location = System::Drawing::Point(610, 270);
            this->edge25_35->Name = L"edge25_35";
            this->edge25_35->Size = System::Drawing::Size(92, 18);
            this->edge25_35->TabIndex = 4;
            this->edge25_35->UseVisualStyleBackColor = false;
            this->edge25_35->Click += gcnew System::EventHandler(this, &MyForm::edge25_35_Click);
            // 
            // edge43_53
            // 
            this->edge43_53->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->edge43_53->FlatAppearance->BorderSize = 0;
            this->edge43_53->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->edge43_53->Location = System::Drawing::Point(372, 462);
            this->edge43_53->Name = L"edge43_53";
            this->edge43_53->Size = System::Drawing::Size(92, 18);
            this->edge43_53->TabIndex = 4;
            this->edge43_53->UseVisualStyleBackColor = false;
            this->edge43_53->Click += gcnew System::EventHandler(this, &MyForm::edge43_53_Click);
            // 
            // edge3_13
            // 
            this->edge3_13->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->edge3_13->FlatAppearance->BorderSize = 0;
            this->edge3_13->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->edge3_13->Location = System::Drawing::Point(374, 78);
            this->edge3_13->Name = L"edge3_13";
            this->edge3_13->Size = System::Drawing::Size(92, 18);
            this->edge3_13->TabIndex = 4;
            this->edge3_13->UseVisualStyleBackColor = false;
            this->edge3_13->Click += gcnew System::EventHandler(this, &MyForm::edge3_13_Click);
            // 
            // edge88_98
            // 
            this->edge88_98->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->edge88_98->FlatAppearance->BorderSize = 0;
            this->edge88_98->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->edge88_98->Location = System::Drawing::Point(962, 846);
            this->edge88_98->Name = L"edge88_98";
            this->edge88_98->Size = System::Drawing::Size(92, 18);
            this->edge88_98->TabIndex = 4;
            this->edge88_98->UseVisualStyleBackColor = false;
            this->edge88_98->Click += gcnew System::EventHandler(this, &MyForm::edge88_98_Click);
            // 
            // edge68_78
            // 
            this->edge68_78->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->edge68_78->FlatAppearance->BorderSize = 0;
            this->edge68_78->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->edge68_78->Location = System::Drawing::Point(964, 654);
            this->edge68_78->Name = L"edge68_78";
            this->edge68_78->Size = System::Drawing::Size(92, 18);
            this->edge68_78->TabIndex = 4;
            this->edge68_78->UseVisualStyleBackColor = false;
            this->edge68_78->Click += gcnew System::EventHandler(this, &MyForm::edge68_78_Click);
            // 
            // edge28_38
            // 
            this->edge28_38->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->edge28_38->FlatAppearance->BorderSize = 0;
            this->edge28_38->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->edge28_38->Location = System::Drawing::Point(966, 270);
            this->edge28_38->Name = L"edge28_38";
            this->edge28_38->Size = System::Drawing::Size(92, 18);
            this->edge28_38->TabIndex = 4;
            this->edge28_38->UseVisualStyleBackColor = false;
            this->edge28_38->Click += gcnew System::EventHandler(this, &MyForm::edge28_38_Click);
            // 
            // edge45_55
            // 
            this->edge45_55->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->edge45_55->FlatAppearance->BorderSize = 0;
            this->edge45_55->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->edge45_55->Location = System::Drawing::Point(609, 462);
            this->edge45_55->Name = L"edge45_55";
            this->edge45_55->Size = System::Drawing::Size(92, 18);
            this->edge45_55->TabIndex = 4;
            this->edge45_55->UseVisualStyleBackColor = false;
            this->edge45_55->Click += gcnew System::EventHandler(this, &MyForm::edge45_55_Click);
            // 
            // edge5_15
            // 
            this->edge5_15->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->edge5_15->FlatAppearance->BorderSize = 0;
            this->edge5_15->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->edge5_15->Location = System::Drawing::Point(611, 78);
            this->edge5_15->Name = L"edge5_15";
            this->edge5_15->Size = System::Drawing::Size(92, 18);
            this->edge5_15->TabIndex = 4;
            this->edge5_15->UseVisualStyleBackColor = false;
            this->edge5_15->Click += gcnew System::EventHandler(this, &MyForm::edge5_15_Click);
            // 
            // edge81_91
            // 
            this->edge81_91->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->edge81_91->FlatAppearance->BorderSize = 0;
            this->edge81_91->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->edge81_91->Location = System::Drawing::Point(132, 846);
            this->edge81_91->Name = L"edge81_91";
            this->edge81_91->Size = System::Drawing::Size(92, 18);
            this->edge81_91->TabIndex = 4;
            this->edge81_91->UseVisualStyleBackColor = false;
            this->edge81_91->Click += gcnew System::EventHandler(this, &MyForm::edge81_91_Click);
            // 
            // edge61_71
            // 
            this->edge61_71->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->edge61_71->FlatAppearance->BorderSize = 0;
            this->edge61_71->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->edge61_71->Location = System::Drawing::Point(134, 654);
            this->edge61_71->Name = L"edge61_71";
            this->edge61_71->Size = System::Drawing::Size(92, 18);
            this->edge61_71->TabIndex = 4;
            this->edge61_71->UseVisualStyleBackColor = false;
            this->edge61_71->Click += gcnew System::EventHandler(this, &MyForm::edge61_71_Click);
            // 
            // edge21_31
            // 
            this->edge21_31->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->edge21_31->FlatAppearance->BorderSize = 0;
            this->edge21_31->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->edge21_31->Location = System::Drawing::Point(136, 270);
            this->edge21_31->Name = L"edge21_31";
            this->edge21_31->Size = System::Drawing::Size(92, 18);
            this->edge21_31->TabIndex = 4;
            this->edge21_31->UseVisualStyleBackColor = false;
            this->edge21_31->Click += gcnew System::EventHandler(this, &MyForm::edge21_31_Click);
            // 
            // edge48_58
            // 
            this->edge48_58->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->edge48_58->FlatAppearance->BorderSize = 0;
            this->edge48_58->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->edge48_58->Location = System::Drawing::Point(965, 462);
            this->edge48_58->Name = L"edge48_58";
            this->edge48_58->Size = System::Drawing::Size(92, 18);
            this->edge48_58->TabIndex = 4;
            this->edge48_58->UseVisualStyleBackColor = false;
            this->edge48_58->Click += gcnew System::EventHandler(this, &MyForm::edge48_58_Click);
            // 
            // edge8_18
            // 
            this->edge8_18->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->edge8_18->FlatAppearance->BorderSize = 0;
            this->edge8_18->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->edge8_18->Location = System::Drawing::Point(967, 78);
            this->edge8_18->Name = L"edge8_18";
            this->edge8_18->Size = System::Drawing::Size(92, 18);
            this->edge8_18->TabIndex = 4;
            this->edge8_18->UseVisualStyleBackColor = false;
            this->edge8_18->Click += gcnew System::EventHandler(this, &MyForm::edge8_18_Click);
            // 
            // edge86_96
            // 
            this->edge86_96->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->edge86_96->FlatAppearance->BorderSize = 0;
            this->edge86_96->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->edge86_96->Location = System::Drawing::Point(725, 846);
            this->edge86_96->Name = L"edge86_96";
            this->edge86_96->Size = System::Drawing::Size(92, 18);
            this->edge86_96->TabIndex = 4;
            this->edge86_96->UseVisualStyleBackColor = false;
            this->edge86_96->Click += gcnew System::EventHandler(this, &MyForm::edge86_96_Click);
            // 
            // edge66_76
            // 
            this->edge66_76->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->edge66_76->FlatAppearance->BorderSize = 0;
            this->edge66_76->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->edge66_76->Location = System::Drawing::Point(727, 654);
            this->edge66_76->Name = L"edge66_76";
            this->edge66_76->Size = System::Drawing::Size(92, 18);
            this->edge66_76->TabIndex = 4;
            this->edge66_76->UseVisualStyleBackColor = false;
            this->edge66_76->Click += gcnew System::EventHandler(this, &MyForm::edge66_76_Click);
            // 
            // edge26_36
            // 
            this->edge26_36->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->edge26_36->FlatAppearance->BorderSize = 0;
            this->edge26_36->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->edge26_36->Location = System::Drawing::Point(729, 270);
            this->edge26_36->Name = L"edge26_36";
            this->edge26_36->Size = System::Drawing::Size(92, 18);
            this->edge26_36->TabIndex = 4;
            this->edge26_36->UseVisualStyleBackColor = false;
            this->edge26_36->Click += gcnew System::EventHandler(this, &MyForm::edge26_36_Click);
            // 
            // edge41_51
            // 
            this->edge41_51->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->edge41_51->FlatAppearance->BorderSize = 0;
            this->edge41_51->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->edge41_51->Location = System::Drawing::Point(135, 462);
            this->edge41_51->Name = L"edge41_51";
            this->edge41_51->Size = System::Drawing::Size(92, 18);
            this->edge41_51->TabIndex = 4;
            this->edge41_51->UseVisualStyleBackColor = false;
            this->edge41_51->Click += gcnew System::EventHandler(this, &MyForm::edge41_51_Click);
            // 
            // edge1_11
            // 
            this->edge1_11->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->edge1_11->FlatAppearance->BorderSize = 0;
            this->edge1_11->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->edge1_11->Location = System::Drawing::Point(137, 78);
            this->edge1_11->Name = L"edge1_11";
            this->edge1_11->Size = System::Drawing::Size(92, 18);
            this->edge1_11->TabIndex = 4;
            this->edge1_11->UseVisualStyleBackColor = false;
            this->edge1_11->Click += gcnew System::EventHandler(this, &MyForm::edge1_11_Click);
            // 
            // edge82_92
            // 
            this->edge82_92->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->edge82_92->FlatAppearance->BorderSize = 0;
            this->edge82_92->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->edge82_92->Location = System::Drawing::Point(251, 846);
            this->edge82_92->Name = L"edge82_92";
            this->edge82_92->Size = System::Drawing::Size(92, 18);
            this->edge82_92->TabIndex = 4;
            this->edge82_92->UseVisualStyleBackColor = false;
            this->edge82_92->Click += gcnew System::EventHandler(this, &MyForm::edge82_92_Click);
            // 
            // edge62_72
            // 
            this->edge62_72->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->edge62_72->FlatAppearance->BorderSize = 0;
            this->edge62_72->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->edge62_72->Location = System::Drawing::Point(253, 654);
            this->edge62_72->Name = L"edge62_72";
            this->edge62_72->Size = System::Drawing::Size(92, 18);
            this->edge62_72->TabIndex = 4;
            this->edge62_72->UseVisualStyleBackColor = false;
            this->edge62_72->Click += gcnew System::EventHandler(this, &MyForm::edge62_72_Click);
            // 
            // edge22_32
            // 
            this->edge22_32->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->edge22_32->FlatAppearance->BorderSize = 0;
            this->edge22_32->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->edge22_32->Location = System::Drawing::Point(255, 270);
            this->edge22_32->Name = L"edge22_32";
            this->edge22_32->Size = System::Drawing::Size(92, 18);
            this->edge22_32->TabIndex = 4;
            this->edge22_32->UseVisualStyleBackColor = false;
            this->edge22_32->Click += gcnew System::EventHandler(this, &MyForm::edge22_32_Click);
            // 
            // edge46_56
            // 
            this->edge46_56->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->edge46_56->FlatAppearance->BorderSize = 0;
            this->edge46_56->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->edge46_56->Location = System::Drawing::Point(728, 462);
            this->edge46_56->Name = L"edge46_56";
            this->edge46_56->Size = System::Drawing::Size(92, 18);
            this->edge46_56->TabIndex = 4;
            this->edge46_56->UseVisualStyleBackColor = false;
            this->edge46_56->Click += gcnew System::EventHandler(this, &MyForm::edge46_56_Click);
            // 
            // edge6_16
            // 
            this->edge6_16->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->edge6_16->FlatAppearance->BorderSize = 0;
            this->edge6_16->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->edge6_16->Location = System::Drawing::Point(730, 78);
            this->edge6_16->Name = L"edge6_16";
            this->edge6_16->Size = System::Drawing::Size(92, 18);
            this->edge6_16->TabIndex = 4;
            this->edge6_16->UseVisualStyleBackColor = false;
            this->edge6_16->Click += gcnew System::EventHandler(this, &MyForm::edge6_16_Click);
            // 
            // edge84_94
            // 
            this->edge84_94->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->edge84_94->FlatAppearance->BorderSize = 0;
            this->edge84_94->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->edge84_94->Location = System::Drawing::Point(488, 846);
            this->edge84_94->Name = L"edge84_94";
            this->edge84_94->Size = System::Drawing::Size(92, 18);
            this->edge84_94->TabIndex = 4;
            this->edge84_94->UseVisualStyleBackColor = false;
            this->edge84_94->Click += gcnew System::EventHandler(this, &MyForm::edge84_94_Click);
            // 
            // edge64_74
            // 
            this->edge64_74->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->edge64_74->FlatAppearance->BorderSize = 0;
            this->edge64_74->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->edge64_74->Location = System::Drawing::Point(490, 654);
            this->edge64_74->Name = L"edge64_74";
            this->edge64_74->Size = System::Drawing::Size(92, 18);
            this->edge64_74->TabIndex = 4;
            this->edge64_74->UseVisualStyleBackColor = false;
            this->edge64_74->Click += gcnew System::EventHandler(this, &MyForm::edge64_74_Click);
            // 
            // edge24_34
            // 
            this->edge24_34->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->edge24_34->FlatAppearance->BorderSize = 0;
            this->edge24_34->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->edge24_34->Location = System::Drawing::Point(492, 270);
            this->edge24_34->Name = L"edge24_34";
            this->edge24_34->Size = System::Drawing::Size(92, 18);
            this->edge24_34->TabIndex = 4;
            this->edge24_34->UseVisualStyleBackColor = false;
            this->edge24_34->Click += gcnew System::EventHandler(this, &MyForm::edge24_34_Click);
            // 
            // edge42_52
            // 
            this->edge42_52->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->edge42_52->FlatAppearance->BorderSize = 0;
            this->edge42_52->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->edge42_52->Location = System::Drawing::Point(254, 462);
            this->edge42_52->Name = L"edge42_52";
            this->edge42_52->Size = System::Drawing::Size(92, 18);
            this->edge42_52->TabIndex = 4;
            this->edge42_52->UseVisualStyleBackColor = false;
            this->edge42_52->Click += gcnew System::EventHandler(this, &MyForm::edge42_52_Click);
            // 
            // edge2_12
            // 
            this->edge2_12->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->edge2_12->FlatAppearance->BorderSize = 0;
            this->edge2_12->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->edge2_12->Location = System::Drawing::Point(256, 78);
            this->edge2_12->Name = L"edge2_12";
            this->edge2_12->Size = System::Drawing::Size(92, 18);
            this->edge2_12->TabIndex = 4;
            this->edge2_12->UseVisualStyleBackColor = false;
            this->edge2_12->Click += gcnew System::EventHandler(this, &MyForm::edge2_12_Click);
            // 
            // edge44_54
            // 
            this->edge44_54->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->edge44_54->FlatAppearance->BorderSize = 0;
            this->edge44_54->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->edge44_54->Location = System::Drawing::Point(491, 462);
            this->edge44_54->Name = L"edge44_54";
            this->edge44_54->Size = System::Drawing::Size(92, 18);
            this->edge44_54->TabIndex = 4;
            this->edge44_54->UseVisualStyleBackColor = false;
            this->edge44_54->Click += gcnew System::EventHandler(this, &MyForm::edge44_54_Click);
            // 
            // edge4_14
            // 
            this->edge4_14->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->edge4_14->FlatAppearance->BorderSize = 0;
            this->edge4_14->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->edge4_14->Location = System::Drawing::Point(493, 78);
            this->edge4_14->Name = L"edge4_14";
            this->edge4_14->Size = System::Drawing::Size(92, 18);
            this->edge4_14->TabIndex = 4;
            this->edge4_14->UseVisualStyleBackColor = false;
            this->edge4_14->Click += gcnew System::EventHandler(this, &MyForm::edge4_14_Click);
            // 
            // edge80_90
            // 
            this->edge80_90->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->edge80_90->FlatAppearance->BorderSize = 0;
            this->edge80_90->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->edge80_90->Location = System::Drawing::Point(14, 846);
            this->edge80_90->Name = L"edge80_90";
            this->edge80_90->Size = System::Drawing::Size(92, 18);
            this->edge80_90->TabIndex = 4;
            this->edge80_90->UseVisualStyleBackColor = false;
            this->edge80_90->Click += gcnew System::EventHandler(this, &MyForm::edge80_90_Click);
            // 
            // edge60_70
            // 
            this->edge60_70->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->edge60_70->FlatAppearance->BorderSize = 0;
            this->edge60_70->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->edge60_70->Location = System::Drawing::Point(16, 654);
            this->edge60_70->Name = L"edge60_70";
            this->edge60_70->Size = System::Drawing::Size(92, 18);
            this->edge60_70->TabIndex = 4;
            this->edge60_70->UseVisualStyleBackColor = false;
            this->edge60_70->Click += gcnew System::EventHandler(this, &MyForm::edge60_70_Click);
            // 
            // edge20_30
            // 
            this->edge20_30->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->edge20_30->FlatAppearance->BorderSize = 0;
            this->edge20_30->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->edge20_30->Location = System::Drawing::Point(18, 270);
            this->edge20_30->Name = L"edge20_30";
            this->edge20_30->Size = System::Drawing::Size(92, 18);
            this->edge20_30->TabIndex = 4;
            this->edge20_30->UseVisualStyleBackColor = false;
            this->edge20_30->Click += gcnew System::EventHandler(this, &MyForm::edge20_30_Click);
            // 
            // edge87_88
            // 
            this->edge87_88->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->edge87_88->FlatAppearance->BorderSize = 0;
            this->edge87_88->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->edge87_88->Location = System::Drawing::Point(937, 770);
            this->edge87_88->Name = L"edge87_88";
            this->edge87_88->Size = System::Drawing::Size(22, 75);
            this->edge87_88->TabIndex = 3;
            this->edge87_88->UseVisualStyleBackColor = false;
            this->edge87_88->Click += gcnew System::EventHandler(this, &MyForm::edge87_88_Click);
            // 
            // edge67_68
            // 
            this->edge67_68->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->edge67_68->FlatAppearance->BorderSize = 0;
            this->edge67_68->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->edge67_68->Location = System::Drawing::Point(939, 578);
            this->edge67_68->Name = L"edge67_68";
            this->edge67_68->Size = System::Drawing::Size(22, 75);
            this->edge67_68->TabIndex = 3;
            this->edge67_68->UseVisualStyleBackColor = false;
            this->edge67_68->Click += gcnew System::EventHandler(this, &MyForm::edge67_68_Click);
            // 
            // edge27_28
            // 
            this->edge27_28->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->edge27_28->FlatAppearance->BorderSize = 0;
            this->edge27_28->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->edge27_28->Location = System::Drawing::Point(941, 194);
            this->edge27_28->Name = L"edge27_28";
            this->edge27_28->Size = System::Drawing::Size(22, 75);
            this->edge27_28->TabIndex = 3;
            this->edge27_28->UseVisualStyleBackColor = false;
            this->edge27_28->Click += gcnew System::EventHandler(this, &MyForm::edge27_28_Click);
            // 
            // edge40_50
            // 
            this->edge40_50->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->edge40_50->FlatAppearance->BorderSize = 0;
            this->edge40_50->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->edge40_50->Location = System::Drawing::Point(17, 462);
            this->edge40_50->Name = L"edge40_50";
            this->edge40_50->Size = System::Drawing::Size(92, 18);
            this->edge40_50->TabIndex = 4;
            this->edge40_50->UseVisualStyleBackColor = false;
            this->edge40_50->Click += gcnew System::EventHandler(this, &MyForm::edge40_50_Click);
            // 
            // edge0_10
            // 
            this->edge0_10->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->edge0_10->FlatAppearance->BorderSize = 0;
            this->edge0_10->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->edge0_10->Location = System::Drawing::Point(19, 78);
            this->edge0_10->Name = L"edge0_10";
            this->edge0_10->Size = System::Drawing::Size(92, 18);
            this->edge0_10->TabIndex = 4;
            this->edge0_10->UseVisualStyleBackColor = false;
            this->edge0_10->Click += gcnew System::EventHandler(this, &MyForm::edge0_10_Click);
            // 
            // edge83_84
            // 
            this->edge83_84->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->edge83_84->FlatAppearance->BorderSize = 0;
            this->edge83_84->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->edge83_84->Location = System::Drawing::Point(463, 770);
            this->edge83_84->Name = L"edge83_84";
            this->edge83_84->Size = System::Drawing::Size(22, 75);
            this->edge83_84->TabIndex = 3;
            this->edge83_84->UseVisualStyleBackColor = false;
            this->edge83_84->Click += gcnew System::EventHandler(this, &MyForm::edge83_84_Click);
            // 
            // edge63_64
            // 
            this->edge63_64->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->edge63_64->FlatAppearance->BorderSize = 0;
            this->edge63_64->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->edge63_64->Location = System::Drawing::Point(465, 578);
            this->edge63_64->Name = L"edge63_64";
            this->edge63_64->Size = System::Drawing::Size(22, 75);
            this->edge63_64->TabIndex = 3;
            this->edge63_64->UseVisualStyleBackColor = false;
            this->edge63_64->Click += gcnew System::EventHandler(this, &MyForm::edge63_64_Click);
            // 
            // edge23_24
            // 
            this->edge23_24->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->edge23_24->FlatAppearance->BorderSize = 0;
            this->edge23_24->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->edge23_24->Location = System::Drawing::Point(467, 194);
            this->edge23_24->Name = L"edge23_24";
            this->edge23_24->Size = System::Drawing::Size(22, 75);
            this->edge23_24->TabIndex = 3;
            this->edge23_24->UseVisualStyleBackColor = false;
            this->edge23_24->Click += gcnew System::EventHandler(this, &MyForm::edge23_24_Click);
            // 
            // edge47_48
            // 
            this->edge47_48->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->edge47_48->FlatAppearance->BorderSize = 0;
            this->edge47_48->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->edge47_48->Location = System::Drawing::Point(940, 386);
            this->edge47_48->Name = L"edge47_48";
            this->edge47_48->Size = System::Drawing::Size(22, 75);
            this->edge47_48->TabIndex = 3;
            this->edge47_48->UseVisualStyleBackColor = false;
            this->edge47_48->Click += gcnew System::EventHandler(this, &MyForm::edge47_48_Click);
            // 
            // edge7_8
            // 
            this->edge7_8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->edge7_8->FlatAppearance->BorderSize = 0;
            this->edge7_8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->edge7_8->Location = System::Drawing::Point(942, 2);
            this->edge7_8->Name = L"edge7_8";
            this->edge7_8->Size = System::Drawing::Size(22, 75);
            this->edge7_8->TabIndex = 3;
            this->edge7_8->UseVisualStyleBackColor = false;
            this->edge7_8->Click += gcnew System::EventHandler(this, &MyForm::edge7_8_Click);
            // 
            // edge85_86
            // 
            this->edge85_86->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->edge85_86->FlatAppearance->BorderSize = 0;
            this->edge85_86->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->edge85_86->Location = System::Drawing::Point(700, 770);
            this->edge85_86->Name = L"edge85_86";
            this->edge85_86->Size = System::Drawing::Size(22, 75);
            this->edge85_86->TabIndex = 3;
            this->edge85_86->UseVisualStyleBackColor = false;
            this->edge85_86->Click += gcnew System::EventHandler(this, &MyForm::edge85_86_Click);
            // 
            // edge65_66
            // 
            this->edge65_66->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->edge65_66->FlatAppearance->BorderSize = 0;
            this->edge65_66->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->edge65_66->Location = System::Drawing::Point(702, 578);
            this->edge65_66->Name = L"edge65_66";
            this->edge65_66->Size = System::Drawing::Size(22, 75);
            this->edge65_66->TabIndex = 3;
            this->edge65_66->UseVisualStyleBackColor = false;
            this->edge65_66->Click += gcnew System::EventHandler(this, &MyForm::edge65_66_Click);
            // 
            // edge25_26
            // 
            this->edge25_26->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->edge25_26->FlatAppearance->BorderSize = 0;
            this->edge25_26->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->edge25_26->Location = System::Drawing::Point(704, 194);
            this->edge25_26->Name = L"edge25_26";
            this->edge25_26->Size = System::Drawing::Size(22, 75);
            this->edge25_26->TabIndex = 3;
            this->edge25_26->UseVisualStyleBackColor = false;
            this->edge25_26->Click += gcnew System::EventHandler(this, &MyForm::edge25_26_Click);
            // 
            // edge43_44
            // 
            this->edge43_44->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->edge43_44->FlatAppearance->BorderSize = 0;
            this->edge43_44->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->edge43_44->Location = System::Drawing::Point(466, 386);
            this->edge43_44->Name = L"edge43_44";
            this->edge43_44->Size = System::Drawing::Size(22, 75);
            this->edge43_44->TabIndex = 3;
            this->edge43_44->UseVisualStyleBackColor = false;
            this->edge43_44->Click += gcnew System::EventHandler(this, &MyForm::egde43_44_Click);
            // 
            // edge3_4
            // 
            this->edge3_4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->edge3_4->FlatAppearance->BorderSize = 0;
            this->edge3_4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->edge3_4->Location = System::Drawing::Point(468, 2);
            this->edge3_4->Name = L"edge3_4";
            this->edge3_4->Size = System::Drawing::Size(22, 75);
            this->edge3_4->TabIndex = 3;
            this->edge3_4->UseVisualStyleBackColor = false;
            this->edge3_4->Click += gcnew System::EventHandler(this, &MyForm::edge3_4_Click);
            // 
            // edge88_89
            // 
            this->edge88_89->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->edge88_89->FlatAppearance->BorderSize = 0;
            this->edge88_89->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->edge88_89->Location = System::Drawing::Point(1056, 770);
            this->edge88_89->Name = L"edge88_89";
            this->edge88_89->Size = System::Drawing::Size(22, 75);
            this->edge88_89->TabIndex = 3;
            this->edge88_89->UseVisualStyleBackColor = false;
            this->edge88_89->Click += gcnew System::EventHandler(this, &MyForm::edge88_89_Click);
            // 
            // edge68_69
            // 
            this->edge68_69->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->edge68_69->FlatAppearance->BorderSize = 0;
            this->edge68_69->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->edge68_69->Location = System::Drawing::Point(1058, 578);
            this->edge68_69->Name = L"edge68_69";
            this->edge68_69->Size = System::Drawing::Size(22, 75);
            this->edge68_69->TabIndex = 3;
            this->edge68_69->UseVisualStyleBackColor = false;
            this->edge68_69->Click += gcnew System::EventHandler(this, &MyForm::edge68_69_Click);
            // 
            // edge28_29
            // 
            this->edge28_29->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->edge28_29->FlatAppearance->BorderSize = 0;
            this->edge28_29->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->edge28_29->Location = System::Drawing::Point(1060, 194);
            this->edge28_29->Name = L"edge28_29";
            this->edge28_29->Size = System::Drawing::Size(22, 75);
            this->edge28_29->TabIndex = 3;
            this->edge28_29->UseVisualStyleBackColor = false;
            this->edge28_29->Click += gcnew System::EventHandler(this, &MyForm::edge28_29_Click);
            // 
            // edge45_46
            // 
            this->edge45_46->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->edge45_46->FlatAppearance->BorderSize = 0;
            this->edge45_46->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->edge45_46->Location = System::Drawing::Point(703, 386);
            this->edge45_46->Name = L"edge45_46";
            this->edge45_46->Size = System::Drawing::Size(22, 75);
            this->edge45_46->TabIndex = 3;
            this->edge45_46->UseVisualStyleBackColor = false;
            this->edge45_46->Click += gcnew System::EventHandler(this, &MyForm::edge45_46_Click);
            // 
            // edge5_6
            // 
            this->edge5_6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->edge5_6->FlatAppearance->BorderSize = 0;
            this->edge5_6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->edge5_6->Location = System::Drawing::Point(705, 2);
            this->edge5_6->Name = L"edge5_6";
            this->edge5_6->Size = System::Drawing::Size(22, 75);
            this->edge5_6->TabIndex = 3;
            this->edge5_6->UseVisualStyleBackColor = false;
            this->edge5_6->Click += gcnew System::EventHandler(this, &MyForm::edge5_6_Click);
            // 
            // edge81_82
            // 
            this->edge81_82->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->edge81_82->FlatAppearance->BorderSize = 0;
            this->edge81_82->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->edge81_82->Location = System::Drawing::Point(226, 770);
            this->edge81_82->Name = L"edge81_82";
            this->edge81_82->Size = System::Drawing::Size(22, 75);
            this->edge81_82->TabIndex = 3;
            this->edge81_82->UseVisualStyleBackColor = false;
            this->edge81_82->Click += gcnew System::EventHandler(this, &MyForm::edge81_82_Click);
            // 
            // edge61_62
            // 
            this->edge61_62->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->edge61_62->FlatAppearance->BorderSize = 0;
            this->edge61_62->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->edge61_62->Location = System::Drawing::Point(228, 578);
            this->edge61_62->Name = L"edge61_62";
            this->edge61_62->Size = System::Drawing::Size(22, 75);
            this->edge61_62->TabIndex = 3;
            this->edge61_62->UseVisualStyleBackColor = false;
            this->edge61_62->Click += gcnew System::EventHandler(this, &MyForm::edge61_62_Click);
            // 
            // edge21_22
            // 
            this->edge21_22->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->edge21_22->FlatAppearance->BorderSize = 0;
            this->edge21_22->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->edge21_22->Location = System::Drawing::Point(230, 194);
            this->edge21_22->Name = L"edge21_22";
            this->edge21_22->Size = System::Drawing::Size(22, 75);
            this->edge21_22->TabIndex = 3;
            this->edge21_22->UseVisualStyleBackColor = false;
            this->edge21_22->Click += gcnew System::EventHandler(this, &MyForm::edge21_22_Click);
            // 
            // edge48_49
            // 
            this->edge48_49->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->edge48_49->FlatAppearance->BorderSize = 0;
            this->edge48_49->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->edge48_49->Location = System::Drawing::Point(1059, 386);
            this->edge48_49->Name = L"edge48_49";
            this->edge48_49->Size = System::Drawing::Size(22, 75);
            this->edge48_49->TabIndex = 3;
            this->edge48_49->UseVisualStyleBackColor = false;
            this->edge48_49->Click += gcnew System::EventHandler(this, &MyForm::edge48_49_Click);
            // 
            // edge8_9
            // 
            this->edge8_9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->edge8_9->FlatAppearance->BorderSize = 0;
            this->edge8_9->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->edge8_9->Location = System::Drawing::Point(1061, 2);
            this->edge8_9->Name = L"edge8_9";
            this->edge8_9->Size = System::Drawing::Size(22, 75);
            this->edge8_9->TabIndex = 3;
            this->edge8_9->UseVisualStyleBackColor = false;
            this->edge8_9->Click += gcnew System::EventHandler(this, &MyForm::edge8_9_Click);
            // 
            // edge86_87
            // 
            this->edge86_87->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->edge86_87->FlatAppearance->BorderSize = 0;
            this->edge86_87->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->edge86_87->Location = System::Drawing::Point(819, 770);
            this->edge86_87->Name = L"edge86_87";
            this->edge86_87->Size = System::Drawing::Size(22, 75);
            this->edge86_87->TabIndex = 3;
            this->edge86_87->UseVisualStyleBackColor = false;
            this->edge86_87->Click += gcnew System::EventHandler(this, &MyForm::edge86_87_Click);
            // 
            // edge66_67
            // 
            this->edge66_67->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->edge66_67->FlatAppearance->BorderSize = 0;
            this->edge66_67->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->edge66_67->Location = System::Drawing::Point(821, 578);
            this->edge66_67->Name = L"edge66_67";
            this->edge66_67->Size = System::Drawing::Size(22, 75);
            this->edge66_67->TabIndex = 3;
            this->edge66_67->UseVisualStyleBackColor = false;
            this->edge66_67->Click += gcnew System::EventHandler(this, &MyForm::edge66_67_Click);
            // 
            // edge26_27
            // 
            this->edge26_27->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->edge26_27->FlatAppearance->BorderSize = 0;
            this->edge26_27->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->edge26_27->Location = System::Drawing::Point(823, 194);
            this->edge26_27->Name = L"edge26_27";
            this->edge26_27->Size = System::Drawing::Size(22, 75);
            this->edge26_27->TabIndex = 3;
            this->edge26_27->UseVisualStyleBackColor = false;
            this->edge26_27->Click += gcnew System::EventHandler(this, &MyForm::edge26_27_Click);
            // 
            // edge41_42
            // 
            this->edge41_42->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->edge41_42->FlatAppearance->BorderSize = 0;
            this->edge41_42->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->edge41_42->Location = System::Drawing::Point(229, 386);
            this->edge41_42->Name = L"edge41_42";
            this->edge41_42->Size = System::Drawing::Size(22, 75);
            this->edge41_42->TabIndex = 3;
            this->edge41_42->UseVisualStyleBackColor = false;
            this->edge41_42->Click += gcnew System::EventHandler(this, &MyForm::edge41_42_Click);
            // 
            // edge1_2
            // 
            this->edge1_2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->edge1_2->FlatAppearance->BorderSize = 0;
            this->edge1_2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->edge1_2->Location = System::Drawing::Point(231, 2);
            this->edge1_2->Name = L"edge1_2";
            this->edge1_2->Size = System::Drawing::Size(22, 75);
            this->edge1_2->TabIndex = 3;
            this->edge1_2->UseVisualStyleBackColor = false;
            this->edge1_2->Click += gcnew System::EventHandler(this, &MyForm::edge1_2_Click);
            // 
            // edge82_83
            // 
            this->edge82_83->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->edge82_83->FlatAppearance->BorderSize = 0;
            this->edge82_83->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->edge82_83->Location = System::Drawing::Point(345, 770);
            this->edge82_83->Name = L"edge82_83";
            this->edge82_83->Size = System::Drawing::Size(22, 75);
            this->edge82_83->TabIndex = 3;
            this->edge82_83->UseVisualStyleBackColor = false;
            this->edge82_83->Click += gcnew System::EventHandler(this, &MyForm::edge82_83_Click);
            // 
            // edge62_63
            // 
            this->edge62_63->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->edge62_63->FlatAppearance->BorderSize = 0;
            this->edge62_63->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->edge62_63->Location = System::Drawing::Point(347, 578);
            this->edge62_63->Name = L"edge62_63";
            this->edge62_63->Size = System::Drawing::Size(22, 75);
            this->edge62_63->TabIndex = 3;
            this->edge62_63->UseVisualStyleBackColor = false;
            this->edge62_63->Click += gcnew System::EventHandler(this, &MyForm::edge62_63_Click);
            // 
            // edge22_23
            // 
            this->edge22_23->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->edge22_23->FlatAppearance->BorderSize = 0;
            this->edge22_23->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->edge22_23->Location = System::Drawing::Point(349, 194);
            this->edge22_23->Name = L"edge22_23";
            this->edge22_23->Size = System::Drawing::Size(22, 75);
            this->edge22_23->TabIndex = 3;
            this->edge22_23->UseVisualStyleBackColor = false;
            this->edge22_23->Click += gcnew System::EventHandler(this, &MyForm::edge22_23_Click);
            // 
            // edge46_47
            // 
            this->edge46_47->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->edge46_47->FlatAppearance->BorderSize = 0;
            this->edge46_47->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->edge46_47->Location = System::Drawing::Point(822, 386);
            this->edge46_47->Name = L"edge46_47";
            this->edge46_47->Size = System::Drawing::Size(22, 75);
            this->edge46_47->TabIndex = 3;
            this->edge46_47->UseVisualStyleBackColor = false;
            this->edge46_47->Click += gcnew System::EventHandler(this, &MyForm::edge46_47_Click);
            // 
            // edge6_7
            // 
            this->edge6_7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->edge6_7->FlatAppearance->BorderSize = 0;
            this->edge6_7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->edge6_7->Location = System::Drawing::Point(824, 2);
            this->edge6_7->Name = L"edge6_7";
            this->edge6_7->Size = System::Drawing::Size(22, 75);
            this->edge6_7->TabIndex = 3;
            this->edge6_7->UseVisualStyleBackColor = false;
            this->edge6_7->Click += gcnew System::EventHandler(this, &MyForm::edge6_7_Click);
            // 
            // edge84_85
            // 
            this->edge84_85->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->edge84_85->FlatAppearance->BorderSize = 0;
            this->edge84_85->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->edge84_85->Location = System::Drawing::Point(582, 770);
            this->edge84_85->Name = L"edge84_85";
            this->edge84_85->Size = System::Drawing::Size(22, 75);
            this->edge84_85->TabIndex = 3;
            this->edge84_85->UseVisualStyleBackColor = false;
            this->edge84_85->Click += gcnew System::EventHandler(this, &MyForm::edge84_85_Click);
            // 
            // edge64_65
            // 
            this->edge64_65->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->edge64_65->FlatAppearance->BorderSize = 0;
            this->edge64_65->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->edge64_65->Location = System::Drawing::Point(584, 578);
            this->edge64_65->Name = L"edge64_65";
            this->edge64_65->Size = System::Drawing::Size(22, 75);
            this->edge64_65->TabIndex = 3;
            this->edge64_65->UseVisualStyleBackColor = false;
            this->edge64_65->Click += gcnew System::EventHandler(this, &MyForm::edge64_65_Click);
            // 
            // edge24_25
            // 
            this->edge24_25->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->edge24_25->FlatAppearance->BorderSize = 0;
            this->edge24_25->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->edge24_25->Location = System::Drawing::Point(586, 194);
            this->edge24_25->Name = L"edge24_25";
            this->edge24_25->Size = System::Drawing::Size(22, 75);
            this->edge24_25->TabIndex = 3;
            this->edge24_25->UseVisualStyleBackColor = false;
            this->edge24_25->Click += gcnew System::EventHandler(this, &MyForm::edge24_25_Click);
            // 
            // edge42_43
            // 
            this->edge42_43->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->edge42_43->FlatAppearance->BorderSize = 0;
            this->edge42_43->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->edge42_43->Location = System::Drawing::Point(348, 386);
            this->edge42_43->Name = L"edge42_43";
            this->edge42_43->Size = System::Drawing::Size(22, 75);
            this->edge42_43->TabIndex = 3;
            this->edge42_43->UseVisualStyleBackColor = false;
            this->edge42_43->Click += gcnew System::EventHandler(this, &MyForm::edge42_43_Click);
            // 
            // edge2_3
            // 
            this->edge2_3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->edge2_3->FlatAppearance->BorderSize = 0;
            this->edge2_3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->edge2_3->Location = System::Drawing::Point(350, 2);
            this->edge2_3->Name = L"edge2_3";
            this->edge2_3->Size = System::Drawing::Size(22, 75);
            this->edge2_3->TabIndex = 3;
            this->edge2_3->UseVisualStyleBackColor = false;
            this->edge2_3->Click += gcnew System::EventHandler(this, &MyForm::edge2_3_Click);
            // 
            // cell89
            // 
            this->cell89->BackColor = System::Drawing::Color::Black;
            this->cell89->FlatAppearance->BorderSize = 0;
            this->cell89->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->cell89->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->cell89->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
            this->cell89->Location = System::Drawing::Point(1080, 770);
            this->cell89->Name = L"cell89";
            this->cell89->Size = System::Drawing::Size(92, 75);
            this->cell89->TabIndex = 2;
            this->cell89->Text = L"89";
            this->cell89->UseVisualStyleBackColor = false;
            // 
            // cell69
            // 
            this->cell69->BackColor = System::Drawing::Color::Black;
            this->cell69->FlatAppearance->BorderSize = 0;
            this->cell69->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->cell69->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->cell69->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
            this->cell69->Location = System::Drawing::Point(1082, 578);
            this->cell69->Name = L"cell69";
            this->cell69->Size = System::Drawing::Size(92, 75);
            this->cell69->TabIndex = 2;
            this->cell69->Text = L"69";
            this->cell69->UseVisualStyleBackColor = false;
            // 
            // cell29
            // 
            this->cell29->BackColor = System::Drawing::Color::Black;
            this->cell29->FlatAppearance->BorderSize = 0;
            this->cell29->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->cell29->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->cell29->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
            this->cell29->Location = System::Drawing::Point(1084, 194);
            this->cell29->Name = L"cell29";
            this->cell29->Size = System::Drawing::Size(92, 75);
            this->cell29->TabIndex = 2;
            this->cell29->Text = L"29";
            this->cell29->UseVisualStyleBackColor = false;
            // 
            // edge44_45
            // 
            this->edge44_45->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->edge44_45->FlatAppearance->BorderSize = 0;
            this->edge44_45->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->edge44_45->Location = System::Drawing::Point(585, 386);
            this->edge44_45->Name = L"edge44_45";
            this->edge44_45->Size = System::Drawing::Size(22, 75);
            this->edge44_45->TabIndex = 3;
            this->edge44_45->UseVisualStyleBackColor = false;
            this->edge44_45->Click += gcnew System::EventHandler(this, &MyForm::edge44_45_Click);
            // 
            // edge4_5
            // 
            this->edge4_5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->edge4_5->FlatAppearance->BorderSize = 0;
            this->edge4_5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->edge4_5->Location = System::Drawing::Point(587, 2);
            this->edge4_5->Name = L"edge4_5";
            this->edge4_5->Size = System::Drawing::Size(22, 75);
            this->edge4_5->TabIndex = 3;
            this->edge4_5->UseVisualStyleBackColor = false;
            this->edge4_5->Click += gcnew System::EventHandler(this, &MyForm::edge4_5_Click);
            // 
            // edge80_81
            // 
            this->edge80_81->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->edge80_81->FlatAppearance->BorderSize = 0;
            this->edge80_81->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->edge80_81->Location = System::Drawing::Point(108, 770);
            this->edge80_81->Name = L"edge80_81";
            this->edge80_81->Size = System::Drawing::Size(22, 75);
            this->edge80_81->TabIndex = 3;
            this->edge80_81->UseVisualStyleBackColor = false;
            this->edge80_81->Click += gcnew System::EventHandler(this, &MyForm::edge80_81_Click);
            // 
            // edge60_61
            // 
            this->edge60_61->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->edge60_61->FlatAppearance->BorderSize = 0;
            this->edge60_61->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->edge60_61->Location = System::Drawing::Point(110, 578);
            this->edge60_61->Name = L"edge60_61";
            this->edge60_61->Size = System::Drawing::Size(22, 75);
            this->edge60_61->TabIndex = 3;
            this->edge60_61->UseVisualStyleBackColor = false;
            this->edge60_61->Click += gcnew System::EventHandler(this, &MyForm::edge60_61_Click);
            // 
            // edge20_21
            // 
            this->edge20_21->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->edge20_21->FlatAppearance->BorderSize = 0;
            this->edge20_21->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->edge20_21->Location = System::Drawing::Point(112, 194);
            this->edge20_21->Name = L"edge20_21";
            this->edge20_21->Size = System::Drawing::Size(22, 75);
            this->edge20_21->TabIndex = 3;
            this->edge20_21->UseVisualStyleBackColor = false;
            this->edge20_21->Click += gcnew System::EventHandler(this, &MyForm::edge20_21_Click);
            // 
            // cell49
            // 
            this->cell49->BackColor = System::Drawing::Color::Black;
            this->cell49->FlatAppearance->BorderSize = 0;
            this->cell49->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->cell49->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->cell49->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
            this->cell49->Location = System::Drawing::Point(1083, 386);
            this->cell49->Name = L"cell49";
            this->cell49->Size = System::Drawing::Size(92, 75);
            this->cell49->TabIndex = 2;
            this->cell49->Text = L"49";
            this->cell49->UseVisualStyleBackColor = false;
            // 
            // cell9
            // 
            this->cell9->BackColor = System::Drawing::Color::Black;
            this->cell9->FlatAppearance->BorderSize = 0;
            this->cell9->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->cell9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->cell9->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
            this->cell9->Location = System::Drawing::Point(1085, 2);
            this->cell9->Name = L"cell9";
            this->cell9->Size = System::Drawing::Size(92, 75);
            this->cell9->TabIndex = 2;
            this->cell9->Text = L"9";
            this->cell9->UseVisualStyleBackColor = false;
            // 
            // cell88
            // 
            this->cell88->BackColor = System::Drawing::Color::Black;
            this->cell88->FlatAppearance->BorderSize = 0;
            this->cell88->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->cell88->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->cell88->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
            this->cell88->Location = System::Drawing::Point(962, 770);
            this->cell88->Name = L"cell88";
            this->cell88->Size = System::Drawing::Size(92, 75);
            this->cell88->TabIndex = 2;
            this->cell88->Text = L"88";
            this->cell88->UseVisualStyleBackColor = false;
            // 
            // cell68
            // 
            this->cell68->BackColor = System::Drawing::Color::Black;
            this->cell68->FlatAppearance->BorderSize = 0;
            this->cell68->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->cell68->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->cell68->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
            this->cell68->Location = System::Drawing::Point(964, 578);
            this->cell68->Name = L"cell68";
            this->cell68->Size = System::Drawing::Size(92, 75);
            this->cell68->TabIndex = 2;
            this->cell68->Text = L"68";
            this->cell68->UseVisualStyleBackColor = false;
            // 
            // edge40_41
            // 
            this->edge40_41->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->edge40_41->FlatAppearance->BorderSize = 0;
            this->edge40_41->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->edge40_41->Location = System::Drawing::Point(111, 386);
            this->edge40_41->Name = L"edge40_41";
            this->edge40_41->Size = System::Drawing::Size(22, 75);
            this->edge40_41->TabIndex = 3;
            this->edge40_41->UseVisualStyleBackColor = false;
            this->edge40_41->Click += gcnew System::EventHandler(this, &MyForm::edge40_41_Click);
            // 
            // cell28
            // 
            this->cell28->BackColor = System::Drawing::Color::Black;
            this->cell28->FlatAppearance->BorderSize = 0;
            this->cell28->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->cell28->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->cell28->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
            this->cell28->Location = System::Drawing::Point(966, 194);
            this->cell28->Name = L"cell28";
            this->cell28->Size = System::Drawing::Size(92, 75);
            this->cell28->TabIndex = 2;
            this->cell28->Text = L"28";
            this->cell28->UseVisualStyleBackColor = false;
            // 
            // cell87
            // 
            this->cell87->BackColor = System::Drawing::Color::Black;
            this->cell87->FlatAppearance->BorderSize = 0;
            this->cell87->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->cell87->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->cell87->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
            this->cell87->Location = System::Drawing::Point(843, 770);
            this->cell87->Name = L"cell87";
            this->cell87->Size = System::Drawing::Size(92, 75);
            this->cell87->TabIndex = 2;
            this->cell87->Text = L"87";
            this->cell87->UseVisualStyleBackColor = false;
            // 
            // cell67
            // 
            this->cell67->BackColor = System::Drawing::Color::Black;
            this->cell67->FlatAppearance->BorderSize = 0;
            this->cell67->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->cell67->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->cell67->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
            this->cell67->Location = System::Drawing::Point(845, 578);
            this->cell67->Name = L"cell67";
            this->cell67->Size = System::Drawing::Size(92, 75);
            this->cell67->TabIndex = 2;
            this->cell67->Text = L"67";
            this->cell67->UseVisualStyleBackColor = false;
            // 
            // edge0_1
            // 
            this->edge0_1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->edge0_1->FlatAppearance->BorderSize = 0;
            this->edge0_1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->edge0_1->Location = System::Drawing::Point(113, 2);
            this->edge0_1->Name = L"edge0_1";
            this->edge0_1->Size = System::Drawing::Size(22, 75);
            this->edge0_1->TabIndex = 3;
            this->edge0_1->UseVisualStyleBackColor = false;
            this->edge0_1->Click += gcnew System::EventHandler(this, &MyForm::edge0_1_Click);
            // 
            // cell48
            // 
            this->cell48->BackColor = System::Drawing::Color::Black;
            this->cell48->FlatAppearance->BorderSize = 0;
            this->cell48->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->cell48->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->cell48->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
            this->cell48->Location = System::Drawing::Point(965, 386);
            this->cell48->Name = L"cell48";
            this->cell48->Size = System::Drawing::Size(92, 75);
            this->cell48->TabIndex = 2;
            this->cell48->Text = L"48";
            this->cell48->UseVisualStyleBackColor = false;
            // 
            // cell27
            // 
            this->cell27->BackColor = System::Drawing::Color::Black;
            this->cell27->FlatAppearance->BorderSize = 0;
            this->cell27->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->cell27->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->cell27->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
            this->cell27->Location = System::Drawing::Point(847, 194);
            this->cell27->Name = L"cell27";
            this->cell27->Size = System::Drawing::Size(92, 75);
            this->cell27->TabIndex = 2;
            this->cell27->Text = L"27";
            this->cell27->UseVisualStyleBackColor = false;
            // 
            // cell86
            // 
            this->cell86->BackColor = System::Drawing::Color::Black;
            this->cell86->FlatAppearance->BorderSize = 0;
            this->cell86->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->cell86->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->cell86->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
            this->cell86->Location = System::Drawing::Point(725, 770);
            this->cell86->Name = L"cell86";
            this->cell86->Size = System::Drawing::Size(92, 75);
            this->cell86->TabIndex = 2;
            this->cell86->Text = L"86";
            this->cell86->UseVisualStyleBackColor = false;
            // 
            // cell66
            // 
            this->cell66->BackColor = System::Drawing::Color::Black;
            this->cell66->FlatAppearance->BorderSize = 0;
            this->cell66->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->cell66->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->cell66->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
            this->cell66->Location = System::Drawing::Point(727, 578);
            this->cell66->Name = L"cell66";
            this->cell66->Size = System::Drawing::Size(92, 75);
            this->cell66->TabIndex = 2;
            this->cell66->Text = L"66";
            this->cell66->UseVisualStyleBackColor = false;
            // 
            // cell8
            // 
            this->cell8->BackColor = System::Drawing::Color::Black;
            this->cell8->FlatAppearance->BorderSize = 0;
            this->cell8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->cell8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->cell8->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
            this->cell8->Location = System::Drawing::Point(967, 2);
            this->cell8->Name = L"cell8";
            this->cell8->Size = System::Drawing::Size(92, 75);
            this->cell8->TabIndex = 2;
            this->cell8->Text = L"8";
            this->cell8->UseVisualStyleBackColor = false;
            // 
            // cell47
            // 
            this->cell47->BackColor = System::Drawing::Color::Black;
            this->cell47->FlatAppearance->BorderSize = 0;
            this->cell47->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->cell47->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->cell47->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
            this->cell47->Location = System::Drawing::Point(846, 386);
            this->cell47->Name = L"cell47";
            this->cell47->Size = System::Drawing::Size(92, 75);
            this->cell47->TabIndex = 2;
            this->cell47->Text = L"47";
            this->cell47->UseVisualStyleBackColor = false;
            // 
            // cell26
            // 
            this->cell26->BackColor = System::Drawing::Color::Black;
            this->cell26->FlatAppearance->BorderSize = 0;
            this->cell26->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->cell26->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->cell26->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
            this->cell26->Location = System::Drawing::Point(729, 194);
            this->cell26->Name = L"cell26";
            this->cell26->Size = System::Drawing::Size(92, 75);
            this->cell26->TabIndex = 2;
            this->cell26->Text = L"26";
            this->cell26->UseVisualStyleBackColor = false;
            // 
            // cell83
            // 
            this->cell83->BackColor = System::Drawing::Color::Black;
            this->cell83->FlatAppearance->BorderSize = 0;
            this->cell83->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->cell83->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->cell83->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
            this->cell83->Location = System::Drawing::Point(369, 770);
            this->cell83->Name = L"cell83";
            this->cell83->Size = System::Drawing::Size(92, 75);
            this->cell83->TabIndex = 2;
            this->cell83->Text = L"83";
            this->cell83->UseVisualStyleBackColor = false;
            // 
            // cell63
            // 
            this->cell63->BackColor = System::Drawing::Color::Black;
            this->cell63->FlatAppearance->BorderSize = 0;
            this->cell63->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->cell63->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->cell63->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
            this->cell63->Location = System::Drawing::Point(371, 578);
            this->cell63->Name = L"cell63";
            this->cell63->Size = System::Drawing::Size(92, 75);
            this->cell63->TabIndex = 2;
            this->cell63->Text = L"63";
            this->cell63->UseVisualStyleBackColor = false;
            // 
            // cell7
            // 
            this->cell7->BackColor = System::Drawing::Color::Black;
            this->cell7->FlatAppearance->BorderSize = 0;
            this->cell7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->cell7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->cell7->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
            this->cell7->Location = System::Drawing::Point(848, 2);
            this->cell7->Name = L"cell7";
            this->cell7->Size = System::Drawing::Size(92, 75);
            this->cell7->TabIndex = 2;
            this->cell7->Text = L"7";
            this->cell7->UseVisualStyleBackColor = false;
            // 
            // cell46
            // 
            this->cell46->BackColor = System::Drawing::Color::Black;
            this->cell46->FlatAppearance->BorderSize = 0;
            this->cell46->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->cell46->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->cell46->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
            this->cell46->Location = System::Drawing::Point(728, 386);
            this->cell46->Name = L"cell46";
            this->cell46->Size = System::Drawing::Size(92, 75);
            this->cell46->TabIndex = 2;
            this->cell46->Text = L"46";
            this->cell46->UseVisualStyleBackColor = false;
            // 
            // cell23
            // 
            this->cell23->BackColor = System::Drawing::Color::Black;
            this->cell23->FlatAppearance->BorderSize = 0;
            this->cell23->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->cell23->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->cell23->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
            this->cell23->Location = System::Drawing::Point(373, 194);
            this->cell23->Name = L"cell23";
            this->cell23->Size = System::Drawing::Size(92, 75);
            this->cell23->TabIndex = 2;
            this->cell23->Text = L"23";
            this->cell23->UseVisualStyleBackColor = false;
            // 
            // cell85
            // 
            this->cell85->BackColor = System::Drawing::Color::Black;
            this->cell85->FlatAppearance->BorderSize = 0;
            this->cell85->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->cell85->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->cell85->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
            this->cell85->Location = System::Drawing::Point(606, 770);
            this->cell85->Name = L"cell85";
            this->cell85->Size = System::Drawing::Size(92, 75);
            this->cell85->TabIndex = 2;
            this->cell85->Text = L"85";
            this->cell85->UseVisualStyleBackColor = false;
            // 
            // cell65
            // 
            this->cell65->BackColor = System::Drawing::Color::Black;
            this->cell65->FlatAppearance->BorderSize = 0;
            this->cell65->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->cell65->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->cell65->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
            this->cell65->Location = System::Drawing::Point(608, 578);
            this->cell65->Name = L"cell65";
            this->cell65->Size = System::Drawing::Size(92, 75);
            this->cell65->TabIndex = 2;
            this->cell65->Text = L"65";
            this->cell65->UseVisualStyleBackColor = false;
            // 
            // cell6
            // 
            this->cell6->BackColor = System::Drawing::Color::Black;
            this->cell6->FlatAppearance->BorderSize = 0;
            this->cell6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->cell6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->cell6->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
            this->cell6->Location = System::Drawing::Point(730, 2);
            this->cell6->Name = L"cell6";
            this->cell6->Size = System::Drawing::Size(92, 75);
            this->cell6->TabIndex = 2;
            this->cell6->Text = L"6";
            this->cell6->UseVisualStyleBackColor = false;
            // 
            // cell43
            // 
            this->cell43->BackColor = System::Drawing::Color::Black;
            this->cell43->FlatAppearance->BorderSize = 0;
            this->cell43->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->cell43->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->cell43->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
            this->cell43->Location = System::Drawing::Point(372, 386);
            this->cell43->Name = L"cell43";
            this->cell43->Size = System::Drawing::Size(92, 75);
            this->cell43->TabIndex = 2;
            this->cell43->Text = L"43";
            this->cell43->UseVisualStyleBackColor = false;
            // 
            // cell82
            // 
            this->cell82->BackColor = System::Drawing::Color::Black;
            this->cell82->FlatAppearance->BorderSize = 0;
            this->cell82->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->cell82->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->cell82->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
            this->cell82->Location = System::Drawing::Point(251, 770);
            this->cell82->Name = L"cell82";
            this->cell82->Size = System::Drawing::Size(92, 75);
            this->cell82->TabIndex = 2;
            this->cell82->Text = L"82";
            this->cell82->UseVisualStyleBackColor = false;
            // 
            // cell25
            // 
            this->cell25->BackColor = System::Drawing::Color::Black;
            this->cell25->FlatAppearance->BorderSize = 0;
            this->cell25->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->cell25->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->cell25->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
            this->cell25->Location = System::Drawing::Point(610, 194);
            this->cell25->Name = L"cell25";
            this->cell25->Size = System::Drawing::Size(92, 75);
            this->cell25->TabIndex = 2;
            this->cell25->Text = L"25";
            this->cell25->UseVisualStyleBackColor = false;
            // 
            // cell62
            // 
            this->cell62->BackColor = System::Drawing::Color::Black;
            this->cell62->FlatAppearance->BorderSize = 0;
            this->cell62->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->cell62->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->cell62->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
            this->cell62->Location = System::Drawing::Point(253, 578);
            this->cell62->Name = L"cell62";
            this->cell62->Size = System::Drawing::Size(92, 75);
            this->cell62->TabIndex = 2;
            this->cell62->Text = L"62";
            this->cell62->UseVisualStyleBackColor = false;
            // 
            // cell3
            // 
            this->cell3->BackColor = System::Drawing::Color::Black;
            this->cell3->FlatAppearance->BorderSize = 0;
            this->cell3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->cell3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->cell3->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
            this->cell3->Location = System::Drawing::Point(374, 2);
            this->cell3->Name = L"cell3";
            this->cell3->Size = System::Drawing::Size(92, 75);
            this->cell3->TabIndex = 2;
            this->cell3->Text = L"3";
            this->cell3->UseVisualStyleBackColor = false;
            // 
            // cell45
            // 
            this->cell45->BackColor = System::Drawing::Color::Black;
            this->cell45->FlatAppearance->BorderSize = 0;
            this->cell45->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->cell45->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->cell45->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
            this->cell45->Location = System::Drawing::Point(609, 386);
            this->cell45->Name = L"cell45";
            this->cell45->Size = System::Drawing::Size(92, 75);
            this->cell45->TabIndex = 2;
            this->cell45->Text = L"45";
            this->cell45->UseVisualStyleBackColor = false;
            // 
            // cell84
            // 
            this->cell84->BackColor = System::Drawing::Color::Black;
            this->cell84->FlatAppearance->BorderSize = 0;
            this->cell84->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->cell84->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->cell84->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
            this->cell84->Location = System::Drawing::Point(488, 770);
            this->cell84->Name = L"cell84";
            this->cell84->Size = System::Drawing::Size(92, 75);
            this->cell84->TabIndex = 2;
            this->cell84->Text = L"84";
            this->cell84->UseVisualStyleBackColor = false;
            // 
            // cell22
            // 
            this->cell22->BackColor = System::Drawing::Color::Black;
            this->cell22->FlatAppearance->BorderSize = 0;
            this->cell22->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->cell22->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->cell22->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
            this->cell22->Location = System::Drawing::Point(255, 194);
            this->cell22->Name = L"cell22";
            this->cell22->Size = System::Drawing::Size(92, 75);
            this->cell22->TabIndex = 2;
            this->cell22->Text = L"22";
            this->cell22->UseVisualStyleBackColor = false;
            // 
            // cell64
            // 
            this->cell64->BackColor = System::Drawing::Color::Black;
            this->cell64->FlatAppearance->BorderSize = 0;
            this->cell64->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->cell64->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->cell64->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
            this->cell64->Location = System::Drawing::Point(490, 578);
            this->cell64->Name = L"cell64";
            this->cell64->Size = System::Drawing::Size(92, 75);
            this->cell64->TabIndex = 2;
            this->cell64->Text = L"64";
            this->cell64->UseVisualStyleBackColor = false;
            // 
            // cell5
            // 
            this->cell5->BackColor = System::Drawing::Color::Black;
            this->cell5->FlatAppearance->BorderSize = 0;
            this->cell5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->cell5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->cell5->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
            this->cell5->Location = System::Drawing::Point(611, 2);
            this->cell5->Name = L"cell5";
            this->cell5->Size = System::Drawing::Size(92, 75);
            this->cell5->TabIndex = 2;
            this->cell5->Text = L"5";
            this->cell5->UseVisualStyleBackColor = false;
            // 
            // cell42
            // 
            this->cell42->BackColor = System::Drawing::Color::Black;
            this->cell42->FlatAppearance->BorderSize = 0;
            this->cell42->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->cell42->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->cell42->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
            this->cell42->Location = System::Drawing::Point(254, 386);
            this->cell42->Name = L"cell42";
            this->cell42->Size = System::Drawing::Size(92, 75);
            this->cell42->TabIndex = 2;
            this->cell42->Text = L"42";
            this->cell42->UseVisualStyleBackColor = false;
            // 
            // cell81
            // 
            this->cell81->BackColor = System::Drawing::Color::Black;
            this->cell81->FlatAppearance->BorderSize = 0;
            this->cell81->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->cell81->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->cell81->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
            this->cell81->Location = System::Drawing::Point(132, 770);
            this->cell81->Name = L"cell81";
            this->cell81->Size = System::Drawing::Size(92, 75);
            this->cell81->TabIndex = 2;
            this->cell81->Text = L"81";
            this->cell81->UseVisualStyleBackColor = false;
            // 
            // cell24
            // 
            this->cell24->BackColor = System::Drawing::Color::Black;
            this->cell24->FlatAppearance->BorderSize = 0;
            this->cell24->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->cell24->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->cell24->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
            this->cell24->Location = System::Drawing::Point(492, 194);
            this->cell24->Name = L"cell24";
            this->cell24->Size = System::Drawing::Size(92, 75);
            this->cell24->TabIndex = 2;
            this->cell24->Text = L"24";
            this->cell24->UseVisualStyleBackColor = false;
            // 
            // cell61
            // 
            this->cell61->BackColor = System::Drawing::Color::Black;
            this->cell61->FlatAppearance->BorderSize = 0;
            this->cell61->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->cell61->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->cell61->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
            this->cell61->Location = System::Drawing::Point(134, 578);
            this->cell61->Name = L"cell61";
            this->cell61->Size = System::Drawing::Size(92, 75);
            this->cell61->TabIndex = 2;
            this->cell61->Text = L"61";
            this->cell61->UseVisualStyleBackColor = false;
            // 
            // cell2
            // 
            this->cell2->BackColor = System::Drawing::Color::Black;
            this->cell2->FlatAppearance->BorderSize = 0;
            this->cell2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->cell2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->cell2->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
            this->cell2->Location = System::Drawing::Point(256, 2);
            this->cell2->Name = L"cell2";
            this->cell2->Size = System::Drawing::Size(92, 75);
            this->cell2->TabIndex = 2;
            this->cell2->Text = L"2";
            this->cell2->UseVisualStyleBackColor = false;
            // 
            // cell44
            // 
            this->cell44->BackColor = System::Drawing::Color::Black;
            this->cell44->FlatAppearance->BorderSize = 0;
            this->cell44->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->cell44->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->cell44->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
            this->cell44->Location = System::Drawing::Point(491, 386);
            this->cell44->Name = L"cell44";
            this->cell44->Size = System::Drawing::Size(92, 75);
            this->cell44->TabIndex = 2;
            this->cell44->Text = L"44";
            this->cell44->UseVisualStyleBackColor = false;
            // 
            // cell80
            // 
            this->cell80->BackColor = System::Drawing::Color::Black;
            this->cell80->FlatAppearance->BorderSize = 0;
            this->cell80->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->cell80->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->cell80->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
            this->cell80->Location = System::Drawing::Point(14, 770);
            this->cell80->Name = L"cell80";
            this->cell80->Size = System::Drawing::Size(92, 75);
            this->cell80->TabIndex = 2;
            this->cell80->Text = L"80";
            this->cell80->UseVisualStyleBackColor = false;
            // 
            // cell21
            // 
            this->cell21->BackColor = System::Drawing::Color::Black;
            this->cell21->FlatAppearance->BorderSize = 0;
            this->cell21->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->cell21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->cell21->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
            this->cell21->Location = System::Drawing::Point(136, 194);
            this->cell21->Name = L"cell21";
            this->cell21->Size = System::Drawing::Size(92, 75);
            this->cell21->TabIndex = 2;
            this->cell21->Text = L"21";
            this->cell21->UseVisualStyleBackColor = false;
            // 
            // cell60
            // 
            this->cell60->BackColor = System::Drawing::Color::Black;
            this->cell60->FlatAppearance->BorderSize = 0;
            this->cell60->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->cell60->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->cell60->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
            this->cell60->Location = System::Drawing::Point(16, 578);
            this->cell60->Name = L"cell60";
            this->cell60->Size = System::Drawing::Size(92, 75);
            this->cell60->TabIndex = 2;
            this->cell60->Text = L"60";
            this->cell60->UseVisualStyleBackColor = false;
            // 
            // cell4
            // 
            this->cell4->BackColor = System::Drawing::Color::Black;
            this->cell4->FlatAppearance->BorderSize = 0;
            this->cell4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->cell4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->cell4->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
            this->cell4->Location = System::Drawing::Point(493, 2);
            this->cell4->Name = L"cell4";
            this->cell4->Size = System::Drawing::Size(92, 75);
            this->cell4->TabIndex = 2;
            this->cell4->Text = L"4";
            this->cell4->UseVisualStyleBackColor = false;
            // 
            // cell41
            // 
            this->cell41->BackColor = System::Drawing::Color::Black;
            this->cell41->FlatAppearance->BorderSize = 0;
            this->cell41->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->cell41->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->cell41->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
            this->cell41->Location = System::Drawing::Point(135, 386);
            this->cell41->Name = L"cell41";
            this->cell41->Size = System::Drawing::Size(92, 75);
            this->cell41->TabIndex = 2;
            this->cell41->Text = L"41";
            this->cell41->UseVisualStyleBackColor = false;
            // 
            // cell20
            // 
            this->cell20->BackColor = System::Drawing::Color::Black;
            this->cell20->FlatAppearance->BorderSize = 0;
            this->cell20->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->cell20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->cell20->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
            this->cell20->Location = System::Drawing::Point(18, 194);
            this->cell20->Name = L"cell20";
            this->cell20->Size = System::Drawing::Size(92, 75);
            this->cell20->TabIndex = 2;
            this->cell20->Text = L"20";
            this->cell20->UseVisualStyleBackColor = false;
            // 
            // cell40
            // 
            this->cell40->BackColor = System::Drawing::Color::Black;
            this->cell40->FlatAppearance->BorderSize = 0;
            this->cell40->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->cell40->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->cell40->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
            this->cell40->Location = System::Drawing::Point(17, 386);
            this->cell40->Name = L"cell40";
            this->cell40->Size = System::Drawing::Size(92, 75);
            this->cell40->TabIndex = 2;
            this->cell40->Text = L"40";
            this->cell40->UseVisualStyleBackColor = false;
            // 
            // cell1
            // 
            this->cell1->BackColor = System::Drawing::Color::Black;
            this->cell1->FlatAppearance->BorderSize = 0;
            this->cell1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->cell1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->cell1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
            this->cell1->Location = System::Drawing::Point(137, 2);
            this->cell1->Name = L"cell1";
            this->cell1->Size = System::Drawing::Size(92, 75);
            this->cell1->TabIndex = 2;
            this->cell1->Text = L"1";
            this->cell1->UseVisualStyleBackColor = false;
            // 
            // cell0
            // 
            this->cell0->BackColor = System::Drawing::Color::Black;
            this->cell0->FlatAppearance->BorderSize = 0;
            this->cell0->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->cell0->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->cell0->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
            this->cell0->Location = System::Drawing::Point(19, 2);
            this->cell0->Name = L"cell0";
            this->cell0->Size = System::Drawing::Size(92, 75);
            this->cell0->TabIndex = 2;
            this->cell0->Text = L"0";
            this->cell0->UseVisualStyleBackColor = false;
            // 
            // textBox1
            // 
            this->textBox1->BackColor = System::Drawing::SystemColors::Desktop;
            this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
            this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox1->ForeColor = System::Drawing::SystemColors::ControlLightLight;
            this->textBox1->Location = System::Drawing::Point(136, 99);
            this->textBox1->Multiline = true;
            this->textBox1->Name = L"textBox1";
            this->textBox1->Size = System::Drawing::Size(71, 45);
            this->textBox1->TabIndex = 0;
            this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            // 
            // textBox2
            // 
            this->textBox2->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
            this->textBox2->BorderStyle = System::Windows::Forms::BorderStyle::None;
            this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox2->ForeColor = System::Drawing::SystemColors::ControlLightLight;
            this->textBox2->Location = System::Drawing::Point(136, 270);
            this->textBox2->Multiline = true;
            this->textBox2->Name = L"textBox2";
            this->textBox2->Size = System::Drawing::Size(71, 50);
            this->textBox2->TabIndex = 0;
            this->textBox2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            // 
            // go
            // 
            this->go->FlatAppearance->BorderSize = 0;
            this->go->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->go->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 17.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->go->ForeColor = System::Drawing::Color::Indigo;
            this->go->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"go.Image")));
            this->go->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
            this->go->Location = System::Drawing::Point(124, 368);
            this->go->Name = L"go";
            this->go->Size = System::Drawing::Size(100, 62);
            this->go->TabIndex = 1;
            this->go->Text = L"GO";
            this->go->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
            this->go->UseVisualStyleBackColor = true;
            this->go->Click += gcnew System::EventHandler(this, &MyForm::go_Click);
            // 
            // label1
            // 
            this->label1->AutoSize = true;
            this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label1->ForeColor = System::Drawing::Color::DarkViolet;
            this->label1->Location = System::Drawing::Point(3, 40);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(352, 37);
            this->label1->TabIndex = 2;
            this->label1->Text = L"Select the cell of BMO";
            // 
            // label2
            // 
            this->label2->AutoSize = true;
            this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label2->ForeColor = System::Drawing::Color::DarkViolet;
            this->label2->Location = System::Drawing::Point(46, 194);
            this->label2->Name = L"label2";
            this->label2->Size = System::Drawing::Size(256, 39);
            this->label2->TabIndex = 3;
            this->label2->Text = L"Select exit cell";
            // 
            // label3
            // 
            this->label3->AutoSize = true;
            this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label3->ForeColor = System::Drawing::Color::DarkRed;
            this->label3->Location = System::Drawing::Point(35, 560);
            this->label3->Name = L"label3";
            this->label3->Size = System::Drawing::Size(0, 37);
            this->label3->TabIndex = 4;
            // 
            // panel2
            // 
            this->panel2->Controls->Add(this->label3);
            this->panel2->Controls->Add(this->label2);
            this->panel2->Controls->Add(this->label1);
            this->panel2->Controls->Add(this->go);
            this->panel2->Controls->Add(this->textBox2);
            this->panel2->Controls->Add(this->textBox1);
            this->panel2->Dock = System::Windows::Forms::DockStyle::Right;
            this->panel2->Location = System::Drawing::Point(1204, 0);
            this->panel2->Name = L"panel2";
            this->panel2->Size = System::Drawing::Size(416, 981);
            this->panel2->TabIndex = 1;
            // 
            // MyForm
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->ClientSize = System::Drawing::Size(1620, 981);
            this->Controls->Add(this->panel2);
            this->Controls->Add(this->panel1);
            this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
            this->Name = L"MyForm";
            this->Text = L"BMO";
            this->panel1->ResumeLayout(false);
            this->panel2->ResumeLayout(false);
            this->panel2->PerformLayout();
            this->ResumeLayout(false);
        }
#pragma endregion
        bool e0_1 = true, e1_2 = true,e2_3=true, e3_4 = true, e4_5 = true, e5_6 = true, e6_7 = true, e7_8 = true, e8_9 = true;
        bool e10_11 = true, e11_12 = true, e12_13 = true, e13_14 = true, e14_15 = true, e15_16 = true, e16_17 = true, e17_18 = true, e18_19 = true;
        bool e20_21 = true, e21_22 = true, e22_23 = true, e23_24 = true, e24_25 = true, e25_26 = true, e26_27 = true, e27_28 = true, e28_29 = true;
        bool e30_31 = true, e31_32 = true, e32_33 = true, e33_34 = true, e34_35 = true, e35_36 = true, e36_37 = true, e37_38 = true, e38_39 = true;
        bool e40_41 = true, e41_42 = true, e42_43 = true, e43_44 = true, e44_45 = true, e45_46 = true, e46_47 = true, e47_48 = true, e48_49 = true;
        bool e50_51 = true, e51_52 = true, e52_53 = true, e53_54 = true, e54_55 = true, e55_56 = true, e56_57 = true, e57_58 = true, e58_59 = true;
        bool e60_61 = true, e61_62 = true, e62_63 = true, e63_64 = true, e64_65 = true, e65_66 = true, e66_67 = true, e67_68 = true, e68_69 = true;
        bool e70_71 = true, e71_72 = true, e72_73 = true, e73_74 = true, e74_75 = true, e75_76 = true, e76_77 = true, e77_78 = true, e78_79 = true;
        bool e80_81 = true, e81_82 = true, e82_83 = true, e83_84 = true, e84_85 = true, e85_86 = true, e86_87 = true, e87_88 = true, e88_89 = true;
        bool e90_91 = true, e91_92 = true, e92_93 = true, e93_94 = true, e94_95 = true, e95_96 = true, e96_97 = true, e97_98 = true, e98_99 = true;

        bool e0_10 = true, e10_20 = true, e20_30 = true, e30_40 = true, e40_50 = true, e50_60 = true, e60_70 = true, e70_80 = true, e80_90 = true;
        bool e1_11 = true, e11_21 = true, e21_31 = true, e31_41 = true, e41_51 = true, e51_61 = true, e61_71 = true, e71_81 = true, e81_91 = true;
        bool e2_12 = true, e12_22 = true, e22_32 = true, e32_42 = true, e42_52 = true, e52_62 = true, e62_72 = true, e72_82 = true, e82_92 = true;
        bool e3_13 = true, e13_23 = true, e23_33 = true, e33_43 = true, e43_53 = true, e53_63 = true, e63_73 = true, e73_83 = true, e83_93 = true;
        bool e4_14 = true, e14_24 = true, e24_34 = true, e34_44 = true, e44_54 = true, e54_64 = true, e64_74 = true, e74_84 = true, e84_94 = true;
        bool e5_15 = true, e15_25 = true, e25_35 = true, e35_45 = true, e45_55 = true, e55_65 = true, e65_75 = true, e75_85 = true, e85_95 = true;
        bool e6_16 = true, e16_26 = true, e26_36 = true, e36_46 = true, e46_56 = true, e56_66 = true, e66_76 = true, e76_86 = true, e86_96 = true;
        bool e7_17 = true, e17_27 = true, e27_37 = true, e37_47 = true, e47_57 = true, e57_67 = true, e67_77 = true, e77_87 = true, e87_97 = true;
        bool e8_18 = true, e18_28 = true, e28_38 = true, e38_48 = true, e48_58 = true, e58_68 = true, e68_78 = true, e78_88 = true, e88_98 = true;
        bool e9_19 = true, e19_29 = true, e29_39 = true, e39_49 = true, e49_59 = true, e59_69 = true, e69_79 = true, e79_89 = true, e89_99 = true;

private: System::Void edge0_1_Click(System::Object^ sender, System::EventArgs^ e) {
    e0_1 = false;
    this->edge0_1->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\walls.jpg");
}
      
private: System::Void edge1_2_Click(System::Object^ sender, System::EventArgs^ e) {
    e1_2 = false;
    this->edge1_2->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\walls.jpg");
}
private: System::Void edge2_3_Click(System::Object^ sender, System::EventArgs^ e) {
    e2_3 = false;
    this->edge2_3->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\walls.jpg");
}
private: System::Void edge3_4_Click(System::Object^ sender, System::EventArgs^ e) {
    e3_4 = false;
    this->edge3_4->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\walls.jpg");
}
private: System::Void edge4_5_Click(System::Object^ sender, System::EventArgs^ e) {
    e4_5 = false;
    this->edge4_5->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\walls.jpg");
}
private: System::Void edge5_6_Click(System::Object^ sender, System::EventArgs^ e) {
    e5_6 = false;
    this->edge5_6->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\walls.jpg");
}
private: System::Void edge6_7_Click(System::Object^ sender, System::EventArgs^ e) {
    e6_7 = false;
    this->edge6_7->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\walls.jpg");
}
private: System::Void edge7_8_Click(System::Object^ sender, System::EventArgs^ e) {
    e7_8 = false;
    this->edge7_8->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\walls.jpg");
}
private: System::Void edge8_9_Click(System::Object^ sender, System::EventArgs^ e) {
    e8_9 = false;
    this->edge8_9->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\walls.jpg");
}
private: System::Void edge10_11_Click(System::Object^ sender, System::EventArgs^ e) {
    e10_11 = false;
    this->edge10_11->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\walls.jpg");
}
private: System::Void edge11_12_Click(System::Object^ sender, System::EventArgs^ e) {
    e11_12= false;
    this->edge11_12->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\walls.jpg");
}
private: System::Void edge12_13_Click(System::Object^ sender, System::EventArgs^ e) {
    e12_13 = false;
    this->edge12_13->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\walls.jpg");
}
private: System::Void edge13_14_Click(System::Object^ sender, System::EventArgs^ e) {
    e13_14 = false;
    this->edge13_14->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\walls.jpg");
}
private: System::Void edge14_15_Click(System::Object^ sender, System::EventArgs^ e) {
    e14_15 = false;
    this->edge14_15->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\walls.jpg");
}
private: System::Void edge15_16_Click(System::Object^ sender, System::EventArgs^ e) {
    e15_16 = false;
    this->edge15_16->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\walls.jpg");
}
private: System::Void edge16_17_Click(System::Object^ sender, System::EventArgs^ e) {
    e16_17 = false;
    this->edge16_17->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\walls.jpg");
}
private: System::Void edge17_18_Click(System::Object^ sender, System::EventArgs^ e) {
    e17_18 = false;
    this->edge17_18->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\walls.jpg");
}
private: System::Void edge18_19_Click(System::Object^ sender, System::EventArgs^ e) {
    e18_19 = false;
    this->edge18_19->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\walls.jpg");
}
private: System::Void edge20_21_Click(System::Object^ sender, System::EventArgs^ e) {
    e20_21 = false;
    this->edge20_21->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\walls.jpg");
}
private: System::Void edge21_22_Click(System::Object^ sender, System::EventArgs^ e) {
    e21_22 = false;
    this->edge21_22->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\walls.jpg");
}
private: System::Void edge22_23_Click(System::Object^ sender, System::EventArgs^ e) {
    e22_23 = false;
    this->edge22_23->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\walls.jpg");
}
private: System::Void edge23_24_Click(System::Object^ sender, System::EventArgs^ e) {
    e23_24 = false;
    this->edge23_24->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\walls.jpg");
}
private: System::Void edge24_25_Click(System::Object^ sender, System::EventArgs^ e) {
    e24_25 = false;
    this->edge24_25->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\walls.jpg");
}
private: System::Void edge25_26_Click(System::Object^ sender, System::EventArgs^ e) {
    e25_26 = false;
    this->edge25_26->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\walls.jpg");
}
private: System::Void edge26_27_Click(System::Object^ sender, System::EventArgs^ e) {
    e26_27 = false;
    this->edge26_27->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\walls.jpg");
}
private: System::Void edge27_28_Click(System::Object^ sender, System::EventArgs^ e) {
    e27_28 = false;
    this->edge27_28->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\walls.jpg");
}
private: System::Void edge28_29_Click(System::Object^ sender, System::EventArgs^ e) {
    e28_29 = false;
    this->edge28_29->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\walls.jpg");
}
private: System::Void edge30_31_Click(System::Object^ sender, System::EventArgs^ e) {
    e30_31 = false;
    this->edge30_31->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\walls.jpg");
}
private: System::Void edge31_32_Click(System::Object^ sender, System::EventArgs^ e) {
    e31_32 = false;
    this->edge31_32->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\walls.jpg");
}
private: System::Void edge32_33_Click(System::Object^ sender, System::EventArgs^ e) {
    e32_33 = false;
    this->edge32_33->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\walls.jpg");
}
private: System::Void edge33_34_Click(System::Object^ sender, System::EventArgs^ e) {
    e33_34 = false;
    this->edge33_34->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\walls.jpg");
}
private: System::Void edge34_35_Click(System::Object^ sender, System::EventArgs^ e) {
    e34_35 = false;
    this->edge34_35->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\walls.jpg");
}
private: System::Void edge35_36_Click(System::Object^ sender, System::EventArgs^ e) {
    e35_36 = false;
    this->edge35_36->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\walls.jpg");
}
private: System::Void edge36_37_Click(System::Object^ sender, System::EventArgs^ e) {
    e36_37 = false;
    this->edge36_37->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\walls.jpg");
}
private: System::Void edge37_38_Click(System::Object^ sender, System::EventArgs^ e) {
    e37_38 = false;
    this->edge37_38->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\walls.jpg");
}
private: System::Void edge38_39_Click(System::Object^ sender, System::EventArgs^ e) {
    e38_39 = false;
    this->edge38_39->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\walls.jpg");
}
private: System::Void edge40_41_Click(System::Object^ sender, System::EventArgs^ e) {
    e40_41 = false;
    this->edge40_41->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\walls.jpg");
}
private: System::Void edge41_42_Click(System::Object^ sender, System::EventArgs^ e) {
    e41_42 = false;
    this->edge41_42->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\walls.jpg");
}
private: System::Void edge42_43_Click(System::Object^ sender, System::EventArgs^ e) {
    e42_43 = false;
    this->edge42_43->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\walls.jpg");
}
private: System::Void egde43_44_Click(System::Object^ sender, System::EventArgs^ e) {
    e43_44 = false;
    this->edge43_44->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\walls.jpg");
}
private: System::Void edge44_45_Click(System::Object^ sender, System::EventArgs^ e) {
    e44_45 = false;
    this->edge44_45->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\walls.jpg");
}
private: System::Void edge45_46_Click(System::Object^ sender, System::EventArgs^ e) {
    e45_46 = false;
    this->edge45_46->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\walls.jpg");
}
private: System::Void edge46_47_Click(System::Object^ sender, System::EventArgs^ e) {
    e46_47 = false;
    this->edge46_47->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\walls.jpg");
}
private: System::Void edge47_48_Click(System::Object^ sender, System::EventArgs^ e) {
    e47_48 = false;
    this->edge47_48->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\walls.jpg");
}
private: System::Void edge48_49_Click(System::Object^ sender, System::EventArgs^ e) {
    e48_49 = false;
    this->edge48_49->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\walls.jpg");
}
private: System::Void edge50_51_Click(System::Object^ sender, System::EventArgs^ e) {
    e50_51 = false;
    this->edge50_51->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\walls.jpg");
}
private: System::Void edge51_52_Click(System::Object^ sender, System::EventArgs^ e) {
    e51_52 = false;
    this->edge51_52->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\walls.jpg");
}
private: System::Void edge52_53_Click(System::Object^ sender, System::EventArgs^ e) {
    e52_53 = false;
    this->edge52_53->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\walls.jpg");
}
private: System::Void edge53_54_Click(System::Object^ sender, System::EventArgs^ e) {
    e53_54 = false;
    this->edge53_54->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\walls.jpg");
}
private: System::Void edge54_55_Click(System::Object^ sender, System::EventArgs^ e) {
    e54_55 = false;
    this->edge54_55->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\walls.jpg");
}
private: System::Void edge55_56_Click(System::Object^ sender, System::EventArgs^ e) {
    e55_56 = false;
    this->edge55_56->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\walls.jpg");
}
private: System::Void edge56_57_Click(System::Object^ sender, System::EventArgs^ e) {
    e56_57 = false;
    this->edge56_57->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\walls.jpg");
}
private: System::Void edge57_58_Click(System::Object^ sender, System::EventArgs^ e) {
    e57_58 = false;
    this->edge57_58->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\walls.jpg");
}
private: System::Void edge58_59_Click(System::Object^ sender, System::EventArgs^ e) {
    e58_59 = false;
    this->edge58_59->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\walls.jpg");
}
private: System::Void edge60_61_Click(System::Object^ sender, System::EventArgs^ e) {
    e60_61 = false;
    this->edge60_61->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\walls.jpg");
}
private: System::Void edge61_62_Click(System::Object^ sender, System::EventArgs^ e) {
    e61_62 = false;
    this->edge61_62->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\walls.jpg");
}
private: System::Void edge62_63_Click(System::Object^ sender, System::EventArgs^ e) {
    e62_63 = false;
    this->edge62_63->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\walls.jpg");
}
private: System::Void edge63_64_Click(System::Object^ sender, System::EventArgs^ e) {
    e63_64 = false;
    this->edge63_64->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\walls.jpg");
}
private: System::Void edge64_65_Click(System::Object^ sender, System::EventArgs^ e) {
    e64_65 = false;
    this->edge64_65->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\walls.jpg");
}
private: System::Void edge65_66_Click(System::Object^ sender, System::EventArgs^ e) {
    e65_66 = false;
    this->edge65_66->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\walls.jpg");
}
private: System::Void edge66_67_Click(System::Object^ sender, System::EventArgs^ e) {
    e66_67 = false;
    this->edge66_67->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\walls.jpg");
}
private: System::Void edge67_68_Click(System::Object^ sender, System::EventArgs^ e) {
    e67_68 = false;
    this->edge67_68->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\walls.jpg");
}
private: System::Void edge68_69_Click(System::Object^ sender, System::EventArgs^ e) {
    e68_69 = false;
    this->edge68_69->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\walls.jpg");
}
private: System::Void edge70_71_Click(System::Object^ sender, System::EventArgs^ e) {
    e70_71 = false;
    this->edge70_71->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\walls.jpg");
}
private: System::Void edge71_72_Click(System::Object^ sender, System::EventArgs^ e) {
    e71_72 = false;
    this->edge71_72->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\walls.jpg");
}
private: System::Void edge72_73_Click(System::Object^ sender, System::EventArgs^ e) {
    e72_73 = false;
    this->edge72_73->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\walls.jpg");
}
private: System::Void edge73_74_Click(System::Object^ sender, System::EventArgs^ e) {
    e73_74 = false;
    this->edge73_74->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\walls.jpg");
}
private: System::Void edge74_75_Click(System::Object^ sender, System::EventArgs^ e) {
    e74_75 = false;
    this->edge74_75->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\walls.jpg");
}
private: System::Void edge75_76_Click(System::Object^ sender, System::EventArgs^ e) {
    e75_76 = false;
    this->edge75_76->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\walls.jpg");
}
private: System::Void edge76_77_Click(System::Object^ sender, System::EventArgs^ e) {
    e76_77 = false;
    this->edge76_77->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\walls.jpg");
}
private: System::Void edge77_78_Click(System::Object^ sender, System::EventArgs^ e) {
    e77_78 = false;
    this->edge77_78->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\walls.jpg");
}
private: System::Void edge78_79_Click(System::Object^ sender, System::EventArgs^ e) {
    e78_79 = false;
    this->edge78_79->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\walls.jpg");
}
private: System::Void edge80_81_Click(System::Object^ sender, System::EventArgs^ e) {
    e80_81 = false;
    this->edge80_81->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\walls.jpg");
}
private: System::Void edge81_82_Click(System::Object^ sender, System::EventArgs^ e) {
    e81_82 = false;
    this->edge81_82->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\walls.jpg");
}
private: System::Void edge82_83_Click(System::Object^ sender, System::EventArgs^ e) {
    e82_83 = false;
    this->edge82_83->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\walls.jpg");
}
private: System::Void edge83_84_Click(System::Object^ sender, System::EventArgs^ e) {
    e83_84 = false;
    this->edge83_84->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\walls.jpg");
}
private: System::Void edge84_85_Click(System::Object^ sender, System::EventArgs^ e) {
    e84_85 = false;
    this->edge84_85->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\walls.jpg");
}
private: System::Void edge85_86_Click(System::Object^ sender, System::EventArgs^ e) {
    e85_86 = false;
    this->edge85_86->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\walls.jpg");
}
private: System::Void edge86_87_Click(System::Object^ sender, System::EventArgs^ e) {
    e86_87 = false;
    this->edge86_87->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\walls.jpg");
}
private: System::Void edge87_88_Click(System::Object^ sender, System::EventArgs^ e) {
    e87_88 = false;
    this->edge87_88->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\walls.jpg");
}
private: System::Void edge88_89_Click(System::Object^ sender, System::EventArgs^ e) {
    e88_89 = false;
    this->edge88_89->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\walls.jpg");
}
private: System::Void edge90_91_Click(System::Object^ sender, System::EventArgs^ e) {
    e90_91 = false;
    this->edge90_91->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\walls.jpg");
}
private: System::Void edge91_92_Click(System::Object^ sender, System::EventArgs^ e) {
    e91_92 = false;
    this->edge91_92->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\walls.jpg");
}
private: System::Void edge92_93_Click(System::Object^ sender, System::EventArgs^ e) {
    e92_93 = false;
    this->edge92_93->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\walls.jpg");
}
private: System::Void edge93_94_Click(System::Object^ sender, System::EventArgs^ e) {
    e93_94 = false;
    this->edge93_94->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\walls.jpg");
}
private: System::Void edge94_95_Click(System::Object^ sender, System::EventArgs^ e) {
    e94_95 = false;
    this->edge94_95->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\walls.jpg");
}
private: System::Void edge95_96_Click(System::Object^ sender, System::EventArgs^ e) {
    e95_96 = false;
    this->edge95_96->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\walls.jpg");
}
private: System::Void edge96_97_Click(System::Object^ sender, System::EventArgs^ e) {
    e96_97 = false;
    this->edge96_97->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\walls.jpg");
}
private: System::Void edge97_98_Click(System::Object^ sender, System::EventArgs^ e) {
    e97_98 = false;
    this->edge97_98->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\walls.jpg");
}
private: System::Void edge98_99_Click(System::Object^ sender, System::EventArgs^ e) {
    e98_99 = false;
    this->edge98_99->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\walls.jpg");
}
private: System::Void edge0_10_Click(System::Object^ sender, System::EventArgs^ e) {
    e0_10 = false;
    this->edge0_10->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\walls.jpg");
}
private: System::Void edge10_20_Click(System::Object^ sender, System::EventArgs^ e) {
    e10_20 = false;
    this->edge10_20->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\walls.jpg");
}
private: System::Void edge20_30_Click(System::Object^ sender, System::EventArgs^ e) {
    e20_30 = false;
    this->edge20_30->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\walls.jpg");
}
private: System::Void edge30_40_Click(System::Object^ sender, System::EventArgs^ e) {
    e30_40 = false;
    this->edge30_40->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\walls.jpg");
}
private: System::Void edge40_50_Click(System::Object^ sender, System::EventArgs^ e) {
    e40_50 = false;
    this->edge40_50->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\walls.jpg");
}
private: System::Void edge50_60_Click(System::Object^ sender, System::EventArgs^ e) {
    e50_60 = false;
    this->edge50_60->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\walls.jpg");
}
private: System::Void edge60_70_Click(System::Object^ sender, System::EventArgs^ e) {
    e60_70 = false;
    this->edge60_70->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\walls.jpg");
}
private: System::Void edge70_80_Click(System::Object^ sender, System::EventArgs^ e) {
    e70_80 = false;
    this->edge70_80->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\walls.jpg");
}
private: System::Void edge80_90_Click(System::Object^ sender, System::EventArgs^ e) {
    e80_90 = false;
    this->edge80_90->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\walls.jpg");
}
private: System::Void edge1_11_Click(System::Object^ sender, System::EventArgs^ e) {
    e1_11 = false;
    this->edge1_11->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\walls.jpg");
}
private: System::Void edge11_21_Click(System::Object^ sender, System::EventArgs^ e) {
    e11_21 = false;
    this->edge11_21->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\walls.jpg");
}
private: System::Void edge21_31_Click(System::Object^ sender, System::EventArgs^ e) {
    e21_31 = false;
    this->edge21_31->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\walls.jpg");
}
private: System::Void edge31_41_Click(System::Object^ sender, System::EventArgs^ e) {
    e31_41 = false;
    this->edge31_41->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\walls.jpg");
}
private: System::Void edge41_51_Click(System::Object^ sender, System::EventArgs^ e) {
    e41_51 = false;
    this->edge41_51->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\walls.jpg");
}
private: System::Void edge51_61_Click(System::Object^ sender, System::EventArgs^ e) {
    e51_61 = false;
    this->edge51_61->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\walls.jpg");
}
private: System::Void edge61_71_Click(System::Object^ sender, System::EventArgs^ e) {
    e61_71 = false;
    this->edge61_71->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\walls.jpg");
}
private: System::Void edge71_81_Click(System::Object^ sender, System::EventArgs^ e) {
    e71_81 = false;
    this->edge71_81->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\walls.jpg");
}
private: System::Void edge81_91_Click(System::Object^ sender, System::EventArgs^ e) {
    e81_91 = false;
    this->edge81_91->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\walls.jpg");
}
private: System::Void edge2_12_Click(System::Object^ sender, System::EventArgs^ e) {
    e2_12 = false;
    this->edge2_12->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\walls.jpg");
}
private: System::Void edge12_22_Click(System::Object^ sender, System::EventArgs^ e) {
    e12_22 = false;
    this->edge12_22->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\walls.jpg");
}
private: System::Void edge22_32_Click(System::Object^ sender, System::EventArgs^ e) {
    e22_32 = false;
    this->edge22_32->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\walls.jpg");
}
private: System::Void edge32_42_Click(System::Object^ sender, System::EventArgs^ e) {
    e32_42 = false;
    this->edge32_42->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\walls.jpg");
}
private: System::Void edge42_52_Click(System::Object^ sender, System::EventArgs^ e) {
    e42_52 = false;
    this->edge42_52->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\walls.jpg");
}
private: System::Void edge52_62_Click(System::Object^ sender, System::EventArgs^ e) {
    e52_62 = false;
    this->edge52_62->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\walls.jpg");
}
private: System::Void edge62_72_Click(System::Object^ sender, System::EventArgs^ e) {
    e62_72 = false;
    this->edge62_72->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\walls.jpg");
}
private: System::Void edge72_82_Click(System::Object^ sender, System::EventArgs^ e) {
    e72_82 = false;
    this->edge72_82->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\walls.jpg");
}
private: System::Void edge82_92_Click(System::Object^ sender, System::EventArgs^ e) {
    e82_92 = false;
    this->edge82_92->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\walls.jpg");
}
private: System::Void edge3_13_Click(System::Object^ sender, System::EventArgs^ e) {
    e3_13 = false;
    this->edge3_13->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\walls.jpg");
}
private: System::Void edge13_23_Click(System::Object^ sender, System::EventArgs^ e) {
    e13_23 = false;
    this->edge13_23->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\walls.jpg");
}
private: System::Void edge23_33_Click(System::Object^ sender, System::EventArgs^ e) {
    e23_33 = false;
    this->edge23_33->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\walls.jpg");
}
private: System::Void edge33_43_Click(System::Object^ sender, System::EventArgs^ e) {
    e33_34 = false;
    this->edge33_43->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\walls.jpg");
}
private: System::Void edge43_53_Click(System::Object^ sender, System::EventArgs^ e) {
    e43_53 = false;
    this->edge43_53->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\walls.jpg");
}
private: System::Void edge53_63_Click(System::Object^ sender, System::EventArgs^ e) {
    e53_63 = false;
    this->edge53_63->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\walls.jpg");
}
private: System::Void edge63_73_Click(System::Object^ sender, System::EventArgs^ e) {
    e63_73 = false;
    this->edge63_73->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\walls.jpg");
}
private: System::Void edge73_83_Click(System::Object^ sender, System::EventArgs^ e) {
    e73_83 = false;
    this->edge73_83->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\walls.jpg");
}
private: System::Void edge83_93_Click(System::Object^ sender, System::EventArgs^ e) { 
    e83_93 = false;
    this->edge83_93->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\walls.jpg");
}
private: System::Void edge4_14_Click(System::Object^ sender, System::EventArgs^ e) {
    e4_14 = false;
    this->edge4_14->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\walls.jpg");
}
private: System::Void edge14_24_Click(System::Object^ sender, System::EventArgs^ e) {
    e14_24 = false;
    this->edge14_24->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\walls.jpg");
}
private: System::Void edge24_34_Click(System::Object^ sender, System::EventArgs^ e) {
    e24_34 = false;
    this->edge24_34->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\walls.jpg");
}
private: System::Void edge34_44_Click(System::Object^ sender, System::EventArgs^ e) {
    e34_44 = false;
    this->edge34_44->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\walls.jpg");
}
private: System::Void edge44_54_Click(System::Object^ sender, System::EventArgs^ e) {
    e44_54 = false;
    this->edge44_54->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\walls.jpg");
}
private: System::Void edge54_64_Click(System::Object^ sender, System::EventArgs^ e) {
    e54_64 = false;
    this->edge54_64->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\walls.jpg");
}
private: System::Void edge64_74_Click(System::Object^ sender, System::EventArgs^ e) {
    e64_74 = false;
    this->edge64_74->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\walls.jpg");
}
private: System::Void edge74_84_Click(System::Object^ sender, System::EventArgs^ e) {
    e74_84 = false;
    this->edge74_84->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\walls.jpg");
}
private: System::Void edge84_94_Click(System::Object^ sender, System::EventArgs^ e) {
    e84_94 = false;
    this->edge84_94->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\walls.jpg");
}
private: System::Void edge5_15_Click(System::Object^ sender, System::EventArgs^ e) {
    e5_15 = false;
    this->edge5_15->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\walls.jpg");
}
private: System::Void edge15_25_Click(System::Object^ sender, System::EventArgs^ e) {
    e15_25 = false;
    this->edge15_25->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\walls.jpg");
}
private: System::Void edge25_35_Click(System::Object^ sender, System::EventArgs^ e) {
    e25_35 = false;
    this->edge25_35->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\walls.jpg");
}
private: System::Void edge35_45_Click(System::Object^ sender, System::EventArgs^ e) {
    e35_45 = false;
    this->edge35_45->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\walls.jpg");
}
private: System::Void edge45_55_Click(System::Object^ sender, System::EventArgs^ e) {
    e45_55 = false;
    this->edge45_55->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\walls.jpg");
}
private: System::Void edge55_65_Click(System::Object^ sender, System::EventArgs^ e) {
    e55_65 = false;
    this->edge55_65->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\walls.jpg");
}
private: System::Void edge65_75_Click(System::Object^ sender, System::EventArgs^ e) {
    e65_75 = false;
    this->edge65_75->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\walls.jpg");
}
private: System::Void edge75_85_Click(System::Object^ sender, System::EventArgs^ e) {
    e75_85 = false;
    this->edge75_85->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\walls.jpg");
}
private: System::Void edge85_95_Click(System::Object^ sender, System::EventArgs^ e) {
    e85_95 = false;
    this->edge85_95->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\walls.jpg");
}
private: System::Void edge6_16_Click(System::Object^ sender, System::EventArgs^ e) {
    e6_16 = false;
    this->edge6_16->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\walls.jpg");
}
private: System::Void edge16_26_Click(System::Object^ sender, System::EventArgs^ e) {
    e16_26 = false;
    this->edge16_26->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\walls.jpg");
}
private: System::Void edge26_36_Click(System::Object^ sender, System::EventArgs^ e) {
    e26_36 = false;
    this->edge26_36->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\walls.jpg");
}
private: System::Void edge36_46_Click(System::Object^ sender, System::EventArgs^ e) {
    e36_46 = false;
    this->edge36_46->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\walls.jpg");
}
private: System::Void edge46_56_Click(System::Object^ sender, System::EventArgs^ e) {
    e46_56 = false;
    this->edge46_56->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\walls.jpg");
}
private: System::Void edge56_66_Click(System::Object^ sender, System::EventArgs^ e) {
    e56_66 = false;
    this->edge56_66->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\walls.jpg");
}
private: System::Void edge66_76_Click(System::Object^ sender, System::EventArgs^ e) {
    e66_76 = false;
    this->edge66_76->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\walls.jpg");
}
private: System::Void edge76_86_Click(System::Object^ sender, System::EventArgs^ e) {
    e76_86 = false;
    this->edge76_86->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\walls.jpg");
}
private: System::Void edge86_96_Click(System::Object^ sender, System::EventArgs^ e) {
    e86_96 = false;
    this->edge86_96->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\walls.jpg");
}
private: System::Void edge7_17_Click(System::Object^ sender, System::EventArgs^ e) {
    e7_17 = false;
    this->edge7_17->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\walls.jpg");
}
private: System::Void edge17_27_Click(System::Object^ sender, System::EventArgs^ e) {
    e17_27 = false;
    this->edge17_27->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\walls.jpg");
}
private: System::Void edge27_37_Click(System::Object^ sender, System::EventArgs^ e) {
    e27_37 = false;
    this->edge27_37->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\walls.jpg");
}
private: System::Void edge37_47_Click(System::Object^ sender, System::EventArgs^ e) {
    e37_47 = false;
    this->edge37_47->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\walls.jpg");
}
private: System::Void edge47_57_Click(System::Object^ sender, System::EventArgs^ e) {
    e47_57 = false;
    this->edge47_57->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\walls.jpg");
}
private: System::Void edge57_67_Click(System::Object^ sender, System::EventArgs^ e) {
    e57_67 = false;
    this->edge57_67->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\walls.jpg");
}
private: System::Void edge67_77_Click(System::Object^ sender, System::EventArgs^ e) {
    e67_77 = false;
    this->edge67_77->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\walls.jpg");
}
private: System::Void edge77_87_Click(System::Object^ sender, System::EventArgs^ e) {
    e77_87 = false;
    this->edge77_87->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\walls.jpg");
}
private: System::Void edge87_97_Click(System::Object^ sender, System::EventArgs^ e) {
    e87_97 = false;
    this->edge87_97->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\walls.jpg");
}
private: System::Void edge8_18_Click(System::Object^ sender, System::EventArgs^ e) {
    e8_18 = false;
    this->edge8_18->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\walls.jpg");
}
private: System::Void edge18_28_Click(System::Object^ sender, System::EventArgs^ e) {
    e18_28 = false;
    this->edge18_28->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\walls.jpg");
}
private: System::Void edge28_38_Click(System::Object^ sender, System::EventArgs^ e) {
    e28_38 = false;
    this->edge28_38->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\walls.jpg");
}
private: System::Void edge38_48_Click(System::Object^ sender, System::EventArgs^ e) {
    e38_48 = false;
    this->edge38_48->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\walls.jpg");
}
private: System::Void edge48_58_Click(System::Object^ sender, System::EventArgs^ e) {
    e48_58 = false;
    this->edge48_58->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\walls.jpg");
}
private: System::Void edge58_68_Click(System::Object^ sender, System::EventArgs^ e) {
    e58_68 = false;
    this->edge58_68->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\walls.jpg");
}
private: System::Void edge68_78_Click(System::Object^ sender, System::EventArgs^ e) {
    e68_78 = false;
    this->edge68_78->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\walls.jpg");
}
private: System::Void edge78_88_Click(System::Object^ sender, System::EventArgs^ e) {
    e78_88 = false;
    this->edge78_88->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\walls.jpg");
}
private: System::Void edge88_98_Click(System::Object^ sender, System::EventArgs^ e) {
    e88_98 = false;
    this->edge88_98->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\walls.jpg");
}
private: System::Void edge9_19_Click(System::Object^ sender, System::EventArgs^ e) {
    e9_19 = false;
    this->edge9_19->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\walls.jpg");
}
private: System::Void edge19_29_Click(System::Object^ sender, System::EventArgs^ e) {
    e19_29 = false;
    this->edge19_29->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\walls.jpg");
}
private: System::Void edge29_39_Click(System::Object^ sender, System::EventArgs^ e) {
    e29_39 = false;
    this->edge29_39->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\walls.jpg");
}
private: System::Void edge39_49_Click(System::Object^ sender, System::EventArgs^ e) {
    e39_49 = false;
    this->edge39_49->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\walls.jpg");
}
private: System::Void edge49_59_Click(System::Object^ sender, System::EventArgs^ e) {
    e49_59 = false;
    this->edge49_59->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\walls.jpg");
}
private: System::Void edge59_69_Click(System::Object^ sender, System::EventArgs^ e) {
    e59_69 = false;
    this->edge59_69->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\walls.jpg");
}
private: System::Void edge69_79_Click(System::Object^ sender, System::EventArgs^ e) {
    e69_79 = false;
    this->edge69_79->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\walls.jpg");
}
private: System::Void edge79_89_Click(System::Object^ sender, System::EventArgs^ e) {
    e79_89 = false;
    this->edge79_89->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\walls.jpg");
}
private: System::Void edge89_99_Click(System::Object^ sender, System::EventArgs^ e) {
    e89_99 = false;
    this->edge89_99->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\walls.jpg");
}

       int start, target;

private: System::Void go_Click(System::Object^ sender, System::EventArgs^ e) {
    start = Convert::ToInt32(textBox1->Text);
    target = Convert::ToInt32(textBox2->Text);
    if (start == 0) {
        this->cell0->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\icons8-bmo-48.png");
        this->cell0->Text = L"\r\n";
    }
    if (start == 1) {
        this->cell1->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\icons8-bmo-48.png");
        this->cell1->Text = L"\r\n";
    }if (start == 2) {
        this->cell2->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\icons8-bmo-48.png");
        this->cell2->Text = L"\r\n";
    }if (start == 3) {
        this->cell3->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\icons8-bmo-48.png");
        this->cell3->Text = L"\r\n";
    }if (start == 4) {
        this->cell4->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\icons8-bmo-48.png");
        this->cell4->Text = L"\r\n";
    }if (start == 5) {
        this->cell5->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\icons8-bmo-48.png");
        this->cell5->Text = L"\r\n";
    }if (start == 6) {
        this->cell6->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\icons8-bmo-48.png");
        this->cell6->Text = L"\r\n";
    }if (start == 7) {
        this->cell7->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\icons8-bmo-48.png");
        this->cell7->Text = L"\r\n";
    }if (start == 8) {
        this->cell8->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\icons8-bmo-48.png");
        this->cell8->Text = L"\r\n";
    }if (start == 9) {
        this->cell9->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\icons8-bmo-48.png");
        this->cell9->Text = L"\r\n";
    }if (start == 10) {
        this->cell10->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\icons8-bmo-48.png");
        this->cell10->Text = L"\r\n";
    }if (start == 11) {
        this->cell11->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\icons8-bmo-48.png");
        this->cell11->Text = L"\r\n";
    }if (start == 12) {
        this->cell12->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\icons8-bmo-48.png");
        this->cell12->Text = L"\r\n";
    }if (start == 13) {
        this->cell13->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\icons8-bmo-48.png");
        this->cell13->Text = L"\r\n";
    }if (start == 14) {
        this->cell14->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\icons8-bmo-48.png");
        this->cell14->Text = L"\r\n";
    }if (start == 15) {
        this->cell15->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\icons8-bmo-48.png");
        this->cell15->Text = L"\r\n";
    }if (start == 16) {
        this->cell16->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\icons8-bmo-48.png");
        this->cell16->Text = L"\r\n";
    }if (start == 17) {
        this->cell17->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\icons8-bmo-48.png");
        this->cell17->Text = L"\r\n";
    }if (start == 18) {
        this->cell18->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\icons8-bmo-48.png");
        this->cell18->Text = L"\r\n";
    }if (start == 19) {
        this->cell19->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\icons8-bmo-48.png");
        this->cell19->Text = L"\r\n";
    }if (start == 20) {
        this->cell20->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\icons8-bmo-48.png");
        this->cell20->Text = L"\r\n";
    }if (start == 21) {
        this->cell21->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\icons8-bmo-48.png");
        this->cell21->Text = L"\r\n";
    }if (start == 22) {
        this->cell22->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\icons8-bmo-48.png");
        this->cell22->Text = L"\r\n";
    }if (start == 23) {
        this->cell23->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\icons8-bmo-48.png");
        this->cell23->Text = L"\r\n";
    }if (start == 24) {
        this->cell24->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\icons8-bmo-48.png");
        this->cell24->Text = L"\r\n";
    }if (start == 25) {
        this->cell25->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\icons8-bmo-48.png");
        this->cell25->Text = L"\r\n";
    }if (start == 26) {
        this->cell26->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\icons8-bmo-48.png");
        this->cell26->Text = L"\r\n";
    }if (start == 27) {
        this->cell27->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\icons8-bmo-48.png");
        this->cell27->Text = L"\r\n";
    }if (start == 28) {
        this->cell28->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\icons8-bmo-48.png");
        this->cell28->Text = L"\r\n";
    }if (start == 29) {
        this->cell29->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\icons8-bmo-48.png");
        this->cell29->Text = L"\r\n";
    }if (start == 30) {
        this->cell30->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\icons8-bmo-48.png");
        this->cell30->Text = L"\r\n";
    }if (start == 31) {
        this->cell31->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\icons8-bmo-48.png");
        this->cell31->Text = L"\r\n";
    }if (start == 32) {
        this->cell32->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\icons8-bmo-48.png");
        this->cell32->Text = L"\r\n";
    }if (start == 33) {
        this->cell33->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\icons8-bmo-48.png");
        this->cell33->Text = L"\r\n";
    }if (start == 34) {
        this->cell34->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\icons8-bmo-48.png");
        this->cell34->Text = L"\r\n";
    }if (start == 35) {
        this->cell35->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\icons8-bmo-48.png");
        this->cell35->Text = L"\r\n";
    }if (start == 36) {
        this->cell36->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\icons8-bmo-48.png");
        this->cell36->Text = L"\r\n";
    }if (start == 37) {
        this->cell37->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\icons8-bmo-48.png");
        this->cell37->Text = L"\r\n";
    }if (start == 38) {
        this->cell38->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\icons8-bmo-48.png");
        this->cell38->Text = L"\r\n";
    }if (start == 39) {
        this->cell39->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\icons8-bmo-48.png");
        this->cell39->Text = L"\r\n";
    }if (start == 40) {
        this->cell40->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\icons8-bmo-48.png");
        this->cell40->Text = L"\r\n";
    }if (start == 41) {
        this->cell41->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\icons8-bmo-48.png");
        this->cell41->Text = L"\r\n";
    }if (start == 42) {
        this->cell42->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\icons8-bmo-48.png");
        this->cell42->Text = L"\r\n";
    }if (start == 43) {
        this->cell43->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\icons8-bmo-48.png");
        this->cell43->Text = L"\r\n";
    }if (start == 44) {
        this->cell44->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\icons8-bmo-48.png");
        this->cell44->Text = L"\r\n";
    }if (start == 45) {
        this->cell45->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\icons8-bmo-48.png");
        this->cell45->Text = L"\r\n";
    }if (start == 46) {
        this->cell46->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\icons8-bmo-48.png");
        this->cell46->Text = L"\r\n";
    }if (start == 47) {
        this->cell47->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\icons8-bmo-48.png");
        this->cell47->Text = L"\r\n";
    }if (start ==48) {
        this->cell48->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\icons8-bmo-48.png");
        this->cell48->Text = L"\r\n";
    }if (start == 49) {
        this->cell49->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\icons8-bmo-48.png");
        this->cell49->Text = L"\r\n";
    }if (start == 50) {
        this->cell50->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\icons8-bmo-48.png");
        this->cell50->Text = L"\r\n";
    }if (start == 51) {
        this->cell51->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\icons8-bmo-48.png");
        this->cell51->Text = L"\r\n";
    }if (start == 52) {
        this->cell52->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\icons8-bmo-48.png");
        this->cell52->Text = L"\r\n";
    }if (start == 53) {
        this->cell53->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\icons8-bmo-48.png");
        this->cell53->Text = L"\r\n";
    }if (start == 54) {
        this->cell54->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\icons8-bmo-48.png");
        this->cell54->Text = L"\r\n";
    }if (start == 55) {
        this->cell55->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\icons8-bmo-48.png");
        this->cell55->Text = L"\r\n";
    }if (start == 56) {
        this->cell56->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\icons8-bmo-48.png");
        this->cell56->Text = L"\r\n";
    }if (start == 57) {
        this->cell57->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\icons8-bmo-48.png");
        this->cell57->Text = L"\r\n";
    }if (start == 58) {
        this->cell58->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\icons8-bmo-48.png");
        this->cell58->Text = L"\r\n";
    }if (start == 59) {
        this->cell59->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\icons8-bmo-48.png");
        this->cell59->Text = L"\r\n";
    }if (start == 60) {
        this->cell60->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\icons8-bmo-48.png");
        this->cell60->Text = L"\r\n";
    }if (start == 61) {
        this->cell61->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\icons8-bmo-48.png");
        this->cell61->Text = L"\r\n";
    }if (start == 62) {
        this->cell62->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\icons8-bmo-48.png");
        this->cell62->Text = L"\r\n";
    }if (start == 63) {
        this->cell63->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\icons8-bmo-48.png");
        this->cell63->Text = L"\r\n";
    }if (start == 64) {
        this->cell64->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\icons8-bmo-48.png");
        this->cell64->Text = L"\r\n";
    }if (start == 65) {
        this->cell65->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\icons8-bmo-48.png");
        this->cell65->Text = L"\r\n";
    }if (start ==66) {
        this->cell66->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\icons8-bmo-48.png");
        this->cell66->Text = L"\r\n";
    }if (start == 67) {
        this->cell67->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\icons8-bmo-48.png");
        this->cell67->Text = L"\r\n";
    }if (start == 68) {
        this->cell68->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\icons8-bmo-48.png");
        this->cell68->Text = L"\r\n";
    }if (start == 69) {
        this->cell69->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\icons8-bmo-48.png");
        this->cell69->Text = L"\r\n";
    }if (start == 70) {
        this->cell70->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\icons8-bmo-48.png");
        this->cell70->Text = L"\r\n";
    }if (start == 71) {
        this->cell71->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\icons8-bmo-48.png");
        this->cell71->Text = L"\r\n";
    }if (start == 72) {
        this->cell72->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\icons8-bmo-48.png");
        this->cell72->Text = L"\r\n";
    }if (start == 73) {
        this->cell73->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\icons8-bmo-48.png");
        this->cell73->Text = L"\r\n";
    }if (start == 74) {
        this->cell74->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\icons8-bmo-48.png");
        this->cell74->Text = L"\r\n";
    }if (start == 75) {
        this->cell75->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\icons8-bmo-48.png");
        this->cell75->Text = L"\r\n";
    }if (start == 76) {
        this->cell76->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\icons8-bmo-48.png");
        this->cell76->Text = L"\r\n";
    }if (start == 77) {
        this->cell77->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\icons8-bmo-48.png");
        this->cell77->Text = L"\r\n";
    }if (start == 78) {
        this->cell78->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\icons8-bmo-48.png");
        this->cell78->Text = L"\r\n";
    }if (start == 79) {
        this->cell79->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\icons8-bmo-48.png");
        this->cell79->Text = L"\r\n";
    }if (start == 80) {
        this->cell80->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\icons8-bmo-48.png");
        this->cell80->Text = L"\r\n";
    }if (start == 81) {
        this->cell81->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\icons8-bmo-48.png");
        this->cell81->Text = L"\r\n";
    }if (start == 82) {
        this->cell82->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\icons8-bmo-48.png");
        this->cell82->Text = L"\r\n";
    }if (start == 83) {
        this->cell83->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\icons8-bmo-48.png");
        this->cell83->Text = L"\r\n";
    }if (start == 84) {
        this->cell84->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\icons8-bmo-48.png");
        this->cell84->Text = L"\r\n";
    }if (start == 85) {
        this->cell85->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\icons8-bmo-48.png");
        this->cell85->Text = L"\r\n";
    }if (start == 86) {
        this->cell86->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\icons8-bmo-48.png");
        this->cell86->Text = L"\r\n";
    }if (start == 87) {
        this->cell87->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\icons8-bmo-48.png");
        this->cell87->Text = L"\r\n";
    }
    if (start == 88) {
        this->cell88->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\icons8-bmo-48.png");
        this->cell88->Text = L"\r\n";
    }if (start == 89) {
        this->cell89->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\icons8-bmo-48.png");
        this->cell89->Text = L"\r\n";
    }if (start == 90) {
        this->cell90->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\icons8-bmo-48.png");
        this->cell90->Text = L"\r\n";
    }if (start == 91) {
        this->cell91->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\icons8-bmo-48.png");
        this->cell91->Text = L"\r\n";
    }if (start == 92) {
        this->cell92->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\icons8-bmo-48.png");
        this->cell92->Text = L"\r\n";
    }if (start == 93) {
        this->cell93->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\icons8-bmo-48.png");
        this->cell93->Text = L"\r\n";
    }if (start == 94) {
        this->cell94->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\icons8-bmo-48.png");
        this->cell94->Text = L"\r\n";
    }if (start ==95) {
        this->cell95->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\icons8-bmo-48.png");
        this->cell95->Text = L"\r\n";
    }if (start == 96) {
        this->cell96->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\icons8-bmo-48.png");
        this->cell96->Text = L"\r\n";
    }if (start == 97) {
        this->cell97->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\icons8-bmo-48.png");
        this->cell97->Text = L"\r\n";
    }
    if (start == 98) {
        this->cell98->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\icons8-bmo-48.png");
        this->cell98->Text = L"\r\n";
    }if (start == 99) {
        this->cell99->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\icons8-bmo-48.png");
        this->cell99->Text = L"\r\n";
    }


    if (target == 0) {
        this->cell0->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\e3.png");
        this->cell0->Text = L"\r\n";
    }
    if (target == 1) {
        this->cell1->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\e3.png");
        this->cell1->Text = L"\r\n";
    }
    if (target == 2) {
        this->cell2->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\e3.png");
        this->cell2->Text = L"\r\n";
    }
    if (target == 3) {
        this->cell3->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\e3.png");
        this->cell3->Text = L"\r\n";
    }
    if (target == 4) {
        this->cell4->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\e3.png");
        this->cell4->Text = L"\r\n";
    }
    if (target == 5) {
        this->cell5->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\e3.png");
        this->cell5->Text = L"\r\n";
    }
    if (target == 6) {
        this->cell6->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\e3.png");
        this->cell6->Text = L"\r\n";
    }
    if (target == 7) {
        this->cell7->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\e3.png");
        this->cell7->Text = L"\r\n";
    }
    if (target == 8) {
        this->cell8->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\e3.png");
        this->cell8->Text = L"\r\n";
    }
    if (target == 9) {
        this->cell9->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\e3.png");
        this->cell9->Text = L"\r\n";
    }
    if (target == 10) {
        this->cell0->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\e3.png");
        this->cell0->Text = L"\r\n";
    }
    if (target == 11) {
        this->cell11->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\e3.png");
        this->cell11->Text = L"\r\n";
    }
    if (target == 12) {
        this->cell12->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\e3.png");
        this->cell12->Text = L"\r\n";
    }
    if (target == 13) {
        this->cell13->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\e3.png");
        this->cell13->Text = L"\r\n";
    }
    if (target == 14) {
        this->cell14->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\e3.png");
        this->cell14->Text = L"\r\n";
    }
    if (target == 15) {
        this->cell15->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\e3.png");
        this->cell15->Text = L"\r\n";
    }
    if (target == 16) {
        this->cell16->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\e3.png");
        this->cell16->Text = L"\r\n";
    }
    if (target == 17) {
        this->cell17->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\e3.png");
        this->cell17->Text = L"\r\n";
    }
    if (target == 18) {
        this->cell18->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\e3.png");
        this->cell18->Text = L"\r\n";
    }
    if (target == 19) {
        this->cell19->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\e3.png");
        this->cell19->Text = L"\r\n";
    }
    if (target == 20) {
        this->cell20->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\e3.png");
        this->cell20->Text = L"\r\n";
    }
    if (target == 21) {
        this->cell21->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\e3.png");
        this->cell21->Text = L"\r\n";
    }
    if (target == 22) {
        this->cell22->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\e3.png");
        this->cell22->Text = L"\r\n";
    }
    if (target == 23) {
        this->cell23->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\e3.png");
        this->cell23->Text = L"\r\n";
    }
    if (target == 24) {
        this->cell24->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\e3.png");
        this->cell24->Text = L"\r\n";
    }
    if (target == 25) {
        this->cell25->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\e3.png");
        this->cell25->Text = L"\r\n";
    }
    if (target == 26) {
        this->cell26->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\e3.png");
        this->cell26->Text = L"\r\n";
    }
    if (target == 27) {
        this->cell27->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\e3.png");
        this->cell27->Text = L"\r\n";
    }
    if (target == 28) {
        this->cell28->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\e3.png");
        this->cell28->Text = L"\r\n";
    }
    if (target == 29) {
        this->cell29->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\e3.png");
        this->cell29->Text = L"\r\n";
    }
    if (target == 30) {
        this->cell30->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\e3.png");
        this->cell30->Text = L"\r\n";
    }
    if (target == 31) {
        this->cell31->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\e3.png");
        this->cell31->Text = L"\r\n";
    }
    if (target == 32) {
        this->cell32->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\e3.png");
        this->cell32->Text = L"\r\n";
    }
    if (target == 33) {
        this->cell33->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\e3.png");
        this->cell33->Text = L"\r\n";
    }
    if (target == 34) {
        this->cell34->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\e3.png");
        this->cell34->Text = L"\r\n";
    }
    if (target == 35) {
        this->cell35->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\e3.png");
        this->cell35->Text = L"\r\n";
    }
    if (target == 36) {
        this->cell36->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\e3.png");
        this->cell36->Text = L"\r\n";
    }
    if (target == 37) {
        this->cell37->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\e3.png");
        this->cell37->Text = L"\r\n";
    }
    if (target == 38) {
        this->cell38->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\e3.png");
        this->cell38->Text = L"\r\n";
    }
    if (target == 39) {
        this->cell39->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\e3.png");
        this->cell39->Text = L"\r\n";
    }
    if (target == 40) {
        this->cell40->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\e3.png");
        this->cell40->Text = L"\r\n";
    }
    if (target == 41) {
        this->cell41->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\e3.png");
        this->cell41->Text = L"\r\n";
    }
    if (target == 42) {
        this->cell42->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\e3.png");
        this->cell42->Text = L"\r\n";
    }
    if (target == 43) {
        this->cell43->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\e3.png");
        this->cell43->Text = L"\r\n";
    }
    if (target == 44) {
        this->cell44->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\e3.png");
        this->cell44->Text = L"\r\n";
    }
    if (target == 45) {
        this->cell45->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\e3.png");
        this->cell45->Text = L"\r\n";
    }
    if (target == 46) {
        this->cell46->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\e3.png");
        this->cell46->Text = L"\r\n";
    }
    if (target == 47) {
        this->cell47->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\e3.png");
        this->cell47->Text = L"\r\n";
    }
    if (target == 48) {
        this->cell48->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\e3.png");
        this->cell48->Text = L"\r\n";
    }
    if (target == 49) {
        this->cell49->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\e3.png");
        this->cell49->Text = L"\r\n";
    }
    if (target == 50) {
        this->cell50->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\e3.png");
        this->cell50->Text = L"\r\n";
    }
    if (target == 51) {
        this->cell51->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\e3.png");
        this->cell51->Text = L"\r\n";
    }
    if (target == 52) {
        this->cell52->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\e3.png");
        this->cell52->Text = L"\r\n";
    }
    if (target == 53) {
        this->cell53->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\e3.png");
        this->cell53->Text = L"\r\n";
    }
    if (target == 54) {
        this->cell54->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\e3.png");
        this->cell54->Text = L"\r\n";
    }
    if (target == 55) {
        this->cell55->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\e3.png");
        this->cell55->Text = L"\r\n";
    }
    if (target == 56) {
        this->cell56->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\e3.png");
        this->cell56->Text = L"\r\n";
    }
    if (target == 57) {
        this->cell57->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\e3.png");
        this->cell57->Text = L"\r\n";
    }
    if (target == 58) {
        this->cell58->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\e3.png");
        this->cell58->Text = L"\r\n";
    }
    if (target == 59) {
        this->cell59->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\e3.png");
        this->cell59->Text = L"\r\n";
    }
    if (target == 60) {
        this->cell60->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\e3.png");
        this->cell60->Text = L"\r\n";
    }
    if (target == 61) {
        this->cell61->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\e3.png");
        this->cell61->Text = L"\r\n";
    }
    if (target == 62) {
        this->cell62->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\e3.png");
        this->cell62->Text = L"\r\n";
    }
    if (target == 63) {
        this->cell63->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\e3.png");
        this->cell63->Text = L"\r\n";
    }
    if (target == 64) {
        this->cell64->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\e3.png");
        this->cell64->Text = L"\r\n";
    }
    if (target == 65) {
        this->cell65->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\e3.png");
        this->cell65->Text = L"\r\n";
    }
    if (target == 66) {
        this->cell66->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\e3.png");
        this->cell66->Text = L"\r\n";
    }
    if (target == 67) {
        this->cell67->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\e3.png");
        this->cell67->Text = L"\r\n";
    }
    if (target == 68) {
        this->cell68->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\e3.png");
        this->cell68->Text = L"\r\n";
    }
    if (target == 69) {
        this->cell69->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\e3.png");
        this->cell69->Text = L"\r\n";
    }
    if (target == 70) {
        this->cell70->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\e3.png");
        this->cell70->Text = L"\r\n";
    }
    if (target == 71) {
        this->cell71->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\e3.png");
        this->cell71->Text = L"\r\n";
    }
    if (target == 72) {
        this->cell72->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\e3.png");
        this->cell72->Text = L"\r\n";
    }
    if (target == 73) {
        this->cell73->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\e3.png");
        this->cell73->Text = L"\r\n";
    }
    if (target == 74) {
        this->cell74->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\e3.png");
        this->cell74->Text = L"\r\n";
    }
    if (target == 75) {
        this->cell75->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\e3.png");
        this->cell75->Text = L"\r\n";
    }
    if (target == 76) {
        this->cell76->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\e3.png");
        this->cell76->Text = L"\r\n";
    }
    if (target == 77) {
        this->cell77->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\e3.png");
        this->cell77->Text = L"\r\n";
    }
    if (target == 78) {
        this->cell78->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\e3.png");
        this->cell78->Text = L"\r\n";
    }
    if (target == 79) {
        this->cell79->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\e3.png");
        this->cell79->Text = L"\r\n";
    }
    if (target == 80) {
        this->cell80->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\e3.png");
        this->cell80->Text = L"\r\n";
    }
    if (target == 81) {
        this->cell81->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\e3.png");
        this->cell81->Text = L"\r\n";
    }
    if (target == 82) {
        this->cell82->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\e3.png");
        this->cell82->Text = L"\r\n";
    }
    if (target == 83) {
        this->cell83->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\e3.png");
        this->cell83->Text = L"\r\n";
    }
    if (target == 84) {
        this->cell84->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\e3.png");
        this->cell84->Text = L"\r\n";
    }
    if (target == 85) {
        this->cell85->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\e3.png");
        this->cell85->Text = L"\r\n";
    }
    if (target == 86) {
        this->cell86->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\e3.png");
        this->cell86->Text = L"\r\n";
    }
    if (target == 87) {
        this->cell87->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\e3.png");
        this->cell87->Text = L"\r\n";
    }
    if (target == 88) {
        this->cell88->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\e3.png");
        this->cell88->Text = L"\r\n";
    }
    if (target == 89) {
        this->cell89->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\e3.png");
        this->cell89->Text = L"\r\n";
    }
    if (target == 90) {
        this->cell90->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\e3.png");
        this->cell90->Text = L"\r\n";
    }
    if (target == 91) {
        this->cell91->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\e3.png");
        this->cell91->Text = L"\r\n";
    }
    if (target == 92) {
        this->cell92->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\e3.png");
        this->cell92->Text = L"\r\n";
    }
    if (target == 93) {
        this->cell93->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\e3.png");
        this->cell93->Text = L"\r\n";
    }
    if (target == 94) {
        this->cell94->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\e3.png");
        this->cell94->Text = L"\r\n";
    }
    if (target == 95) {
        this->cell95->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\e3.png");
        this->cell95->Text = L"\r\n";
    }
    if (target == 96) {
        this->cell96->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\e3.png");
        this->cell96->Text = L"\r\n";
    }
    if (target == 97) {
        this->cell97->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\e3.png");
        this->cell97->Text = L"\r\n";
    }
    if (target == 98) {
        this->cell98->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\e3.png");
        this->cell98->Text = L"\r\n";
    }
    if (target == 99) {
        this->cell99->Image = System::Drawing::Image::FromFile("D:\\project_ODC\\BMO\\image\\e3.png");
        this->cell99->Text = L"\r\n";
    }
   
    vector<vector<bool>> adj_matrix(100, vector<bool>(100, false));
     for (int i = 0; i < 100; i++) {
          if ((i+1) % 10 != 0) {
              adj_matrix[i][i + 1] = true;
              adj_matrix[i + 1][i] = true;
          }
      }
      //v
      for (int i = 0; i < 90; i++) {
          adj_matrix[i][i + 10] = true;
          adj_matrix[i + 10][i] = true;
      }

      if (!e0_1) {
          adj_matrix[0][1] = false;
          adj_matrix[1][0] = false;
      }
      if (!e1_2) {
          adj_matrix[1][2] = false;
          adj_matrix[2][1] = false;
      }
      if (!e2_3) {
          adj_matrix[2][3] = false;
          adj_matrix[3][2] = false;
      }
      if (!e3_4) {
          adj_matrix[3][4] = false;
          adj_matrix[4][3] = false;
      }
      if (!e4_5) {
          adj_matrix[4][5] = false;
          adj_matrix[5][4] = false;
      }
      if (!e5_6) {
          adj_matrix[5][6] = false;
          adj_matrix[6][5] = false;
      }
      if (!e6_7) {
          adj_matrix[6][7] = false;
          adj_matrix[7][6] = false;
      }
      if (!e7_8) {
          adj_matrix[7][8] = false;
          adj_matrix[8][7] = false;
      }
      if (!e8_9) {
          adj_matrix[8][9] = false;
          adj_matrix[9][8] = false;
      }
      if (!e10_11) {
          adj_matrix[10][11] = false;
          adj_matrix[11][10] = false;
      }
      if (!e11_12) {
          adj_matrix[11][12] = false;
          adj_matrix[12][11] = false;
      }
      if (!e12_13) {
          adj_matrix[12][13] = false;
          adj_matrix[13][12] = false;
      }
      if (!e13_14) {
          adj_matrix[13][14] = false;
          adj_matrix[14][13] = false;
      }
      if (!e14_15) {
          adj_matrix[14][15] = false;
          adj_matrix[15][14] = false;
      }
      if (!e15_16) {
          adj_matrix[15][16] = false;
          adj_matrix[16][15] = false;
      }
      if (!e16_17) {
          adj_matrix[16][17] = false;
          adj_matrix[17][16] = false;
      }
      if (!e17_18) {
          adj_matrix[17][18] = false;
          adj_matrix[18][17] = false;
      }
      if (!e18_19) {
          adj_matrix[18][19] = false;
          adj_matrix[19][18] = false;
      }
      if (!e20_21) {
          adj_matrix[20][21] = false;
          adj_matrix[21][20] = false;
      }
      if (!e21_22) {
          adj_matrix[21][22] = false;
          adj_matrix[22][21] = false;
      }
      if (!e22_23) {
          adj_matrix[22][23] = false;
          adj_matrix[23][22] = false;
      }
      if (!e23_24) {
          adj_matrix[23][24] = false;
          adj_matrix[24][23] = false;
      }
      if (!e24_25) {
          adj_matrix[24][25] = false;
          adj_matrix[25][24] = false;
      }
      if (!e25_26) {
          adj_matrix[25][26] = false;
          adj_matrix[26][25] = false;
      }
      if (!e26_27) {
          adj_matrix[26][27] = false;
          adj_matrix[27][26] = false;
      }
      if (!e27_28) {
          adj_matrix[27][28] = false;
          adj_matrix[28][27] = false;
      }
      if (!e28_29) {
          adj_matrix[28][29] = false;
          adj_matrix[29][28] = false;
      }
      if (!e30_31) {
          adj_matrix[30][31] = false;
          adj_matrix[31][30] = false;
      }
      if (!e31_32) {
          adj_matrix[31][32] = false;
          adj_matrix[32][31] = false;
      }
      if (!e32_33) {
          adj_matrix[32][33] = false;
          adj_matrix[33][32] = false;
      }
      if (!e33_34) {
          adj_matrix[33][34] = false;
          adj_matrix[34][33] = false;
      }
      if (!e34_35) {
          adj_matrix[34][35] = false;
          adj_matrix[35][34] = false;
      }
      if (!e35_36) {
          adj_matrix[35][36] = false;
          adj_matrix[36][35] = false;
      }
      if (!e36_37) {
          adj_matrix[36][37] = false;
          adj_matrix[37][36] = false;
      }
      if (!e37_38) {
          adj_matrix[37][38] = false;
          adj_matrix[38][37] = false;
      }
      if (!e38_39) {
          adj_matrix[38][39] = false;
          adj_matrix[39][38] = false;
      }
      if (!e40_41) {
          adj_matrix[40][41] = false;
          adj_matrix[41][40] = false;
      }
      if (!e41_42) {
          adj_matrix[41][42] = false;
          adj_matrix[42][41] = false;
      }
      if (!e42_43) {
          adj_matrix[42][43] = false;
          adj_matrix[43][42] = false;
      }
      if (!e43_44) {
          adj_matrix[43][44] = false;
          adj_matrix[44][43] = false;
      }
      if (!e44_45) {
          adj_matrix[44][45] = false;
          adj_matrix[45][44] = false;
      }
      if (!e45_46) {
          adj_matrix[45][46] = false;
          adj_matrix[46][45] = false;
      }
      if (!e46_47) {
          adj_matrix[46][47] = false;
          adj_matrix[47][46] = false;
      }
      if (!e47_48) {
          adj_matrix[47][48] = false;
          adj_matrix[48][47] = false;
      }
      if (!e48_49) {
          adj_matrix[48][49] = false;
          adj_matrix[49][48] = false;
      }
      if (!e50_51) {
          adj_matrix[50][51] = false;
          adj_matrix[51][50] = false;
      }
      if (!e51_52) {
          adj_matrix[51][52] = false;
          adj_matrix[52][51] = false;
      }
      if (!e52_53) {
          adj_matrix[52][53] = false;
          adj_matrix[53][52] = false;
      }
      if (!e53_54) {
          adj_matrix[53][54] = false;
          adj_matrix[54][53] = false;
      }
      if (!e54_55) {
          adj_matrix[54][55] = false;
          adj_matrix[55][54] = false;
      }
      if (!e55_56) {
          adj_matrix[55][56] = false;
          adj_matrix[56][55] = false;
      }
      if (!e56_57) {
          adj_matrix[56][57] = false;
          adj_matrix[57][56] = false;
      }
      if (!e57_58) {
          adj_matrix[57][58] = false;
          adj_matrix[58][57] = false;
      }
      if (!e58_59) {
          adj_matrix[58][59] = false;
          adj_matrix[59][58] = false;
      }
      if (!e60_61) {
          adj_matrix[60][61] = false;
          adj_matrix[61][60] = false;
      }
      if (!e61_62) {
          adj_matrix[61][62] = false;
          adj_matrix[62][61] = false;
      }
      if (!e62_63) {
          adj_matrix[62][63] = false;
          adj_matrix[63][62] = false;
      }
      if (!e63_64) {
          adj_matrix[63][64] = false;
          adj_matrix[64][63] = false;
      }
      if (!e64_65) {
          adj_matrix[64][65] = false;
          adj_matrix[65][64] = false;
      }
      if (!e65_66) {
          adj_matrix[65][66] = false;
          adj_matrix[66][65] = false;
      }
      if (!e66_67) {
          adj_matrix[66][67] = false;
          adj_matrix[67][66] = false;
      }
      if (!e67_68) {
          adj_matrix[67][68] = false;
          adj_matrix[68][67] = false;
      }
      if (!e68_69) {
          adj_matrix[68][69] = false;
          adj_matrix[69][68] = false;
      }
      if (!e70_71) {
          adj_matrix[70][71] = false;
          adj_matrix[71][70] = false;
      }
      if (!e71_72) {
          adj_matrix[71][72] = false;
          adj_matrix[72][71] = false;
      }
      if (!e72_73) {
          adj_matrix[72][73] = false;
          adj_matrix[73][72] = false;
      }
      if (!e73_74) {
          adj_matrix[73][74] = false;
          adj_matrix[74][73] = false;
      }
      if (!e74_75) {
          adj_matrix[74][75] = false;
          adj_matrix[75][74] = false;
      }
      if (!e75_76) {
          adj_matrix[75][76] = false;
          adj_matrix[76][75] = false;
      }
      if (!e76_77) {
          adj_matrix[76][77] = false;
          adj_matrix[77][76] = false;
      }
      if (!e77_78) {
          adj_matrix[77][78] = false;
          adj_matrix[78][77] = false;
      }
      if (!e78_79) {
          adj_matrix[78][79] = false;
          adj_matrix[79][78] = false;
      }
      if (!e80_81) {
          adj_matrix[80][81] = false;
          adj_matrix[81][80] = false;
      }
      if (!e81_82) {
          adj_matrix[81][82] = false;
          adj_matrix[82][81] = false;
      }
      if (!e82_83) {
          adj_matrix[82][83] = false;
          adj_matrix[83][82] = false;
      }
      if (!e83_84) {
          adj_matrix[83][84] = false;
          adj_matrix[84][83] = false;
      }
      if (!e84_85) {
          adj_matrix[84][85] = false;
          adj_matrix[85][84] = false;
      }
      if (!e85_86) {
          adj_matrix[85][86] = false;
          adj_matrix[86][85] = false;
      }
      if (!e86_87) {
          adj_matrix[86][87] = false;
          adj_matrix[87][86] = false;
      }
      if (!e87_88) {
          adj_matrix[87][88] = false;
          adj_matrix[88][87] = false;
      }
      if (!e88_89) {
          adj_matrix[88][89] = false;
          adj_matrix[89][88] = false;
      }
      if (!e90_91) {
          adj_matrix[90][91] = false;
          adj_matrix[91][90] = false;
      }
      if (!e91_92) {
          adj_matrix[91][92] = false;
          adj_matrix[92][91] = false;
      }
      if (!e92_93) {
          adj_matrix[92][93] = false;
          adj_matrix[93][92] = false;
      }
      if (!e93_94) {
          adj_matrix[93][94] = false;
          adj_matrix[94][93] = false;
      }
      if (!e94_95) {
          adj_matrix[94][95] = false;
          adj_matrix[95][94] = false;
      }
      if (!e95_96) {
          adj_matrix[95][96] = false;
          adj_matrix[96][95] = false;
      }
      if (!e96_97) {
          adj_matrix[96][97] = false;
          adj_matrix[97][96] = false;
      }
      if (!e97_98) {
          adj_matrix[97][98] = false;
          adj_matrix[98][97] = false;
      }
      if (!e98_99) {
          adj_matrix[98][99] = false;
          adj_matrix[99][98] = false;
      }
      if (!e0_10) {
          adj_matrix[0][10] = false;
          adj_matrix[10][0] = false;
      }
      if (!e10_20) {
          adj_matrix[10][20] = false;
          adj_matrix[20][10] = false;
      }
      if (!e20_30) {
          adj_matrix[20][30] = false;
          adj_matrix[30][20] = false;
      }
      if (!e30_40) {
          adj_matrix[30][40] = false;
          adj_matrix[40][30] = false;
      }
      if (!e40_50) {
          adj_matrix[40][50] = false;
          adj_matrix[50][40] = false;
      }
      if (!e50_60) {
          adj_matrix[50][60] = false;
          adj_matrix[60][50] = false;
      }
      if (!e60_70) {
          adj_matrix[60][70] = false;
          adj_matrix[70][60] = false;
      }
      if (!e70_80) {
          adj_matrix[70][80] = false;
          adj_matrix[80][70] = false;
      }
      if (!e80_90) {
          adj_matrix[80][90] = false;
          adj_matrix[90][80] = false;
      }
      if (!e1_11) {
          adj_matrix[1][11] = false;
          adj_matrix[11][1] = false;
      }
      if (!e11_21) {
          adj_matrix[11][21] = false;
          adj_matrix[21][11] = false;
      }
      if (!e21_31) {
          adj_matrix[21][31] = false;
          adj_matrix[31][21] = false;
      }
      if (!e31_41) {
          adj_matrix[31][41] = false;
          adj_matrix[41][31] = false;
      }
      if (!e41_51) {
          adj_matrix[41][51] = false;
          adj_matrix[51][41] = false;
      }
      if (!e51_61) {
          adj_matrix[51][61] = false;
          adj_matrix[61][51] = false;
      }
      if (!e61_71) {
          adj_matrix[61][71] = false;
          adj_matrix[71][61] = false;
      }
      if (!e71_81) {
          adj_matrix[71][81] = false;
          adj_matrix[81][71] = false;
      }
      if (!e81_91) {
          adj_matrix[81][91] = false;
          adj_matrix[91][81] = false;
      } if (!e2_12) {
          adj_matrix[2][12] = false;
          adj_matrix[12][2] = false;
      }
      if (!e12_22) {
          adj_matrix[22][12] = false;
          adj_matrix[12][22] = false;
      }
      if (!e22_32) {
          adj_matrix[22][32] = false;
          adj_matrix[32][22] = false;
      }
      if (!e32_42) {
          adj_matrix[32][42] = false;
          adj_matrix[42][32] = false;
      }
      if (!e42_52) {
          adj_matrix[42][52] = false;
          adj_matrix[52][42] = false;
      }
      if (!e52_62) {
          adj_matrix[52][62] = false;
          adj_matrix[62][52] = false;
      }
      if (!e62_72) {
          adj_matrix[62][72] = false;
          adj_matrix[72][62] = false;
      }
      if (!e72_82) {
          adj_matrix[72][82] = false;
          adj_matrix[82][72] = false;
      }
      if (!e82_92) {
          adj_matrix[82][92] = false;
          adj_matrix[92][82] = false;
      } if (!e3_13) {
          adj_matrix[3][13] = false;
          adj_matrix[13][3] = false;
      }
      if (!e13_23) {
          adj_matrix[13][23] = false;
          adj_matrix[23][13] = false;
      }
      if (!e23_33) {
          adj_matrix[23][33] = false;
          adj_matrix[33][23] = false;
      }
      if (!e33_43) {
          adj_matrix[33][43] = false;
          adj_matrix[43][33] = false;
      }
      if (!e43_53) {
          adj_matrix[43][53] = false;
          adj_matrix[53][43] = false;
      }
      if (!e53_63) {
          adj_matrix[53][63] = false;
          adj_matrix[63][53] = false;
      }
      if (!e63_73) {
          adj_matrix[63][73] = false;
          adj_matrix[73][63] = false;
      }
      if (!e73_83) {
          adj_matrix[73][83] = false;
          adj_matrix[83][73] = false;
      }
      if (!e83_93) {
          adj_matrix[83][93] = false;
          adj_matrix[93][83] = false;
      } if (!e4_14) {
          adj_matrix[4][14] = false;
          adj_matrix[14][4] = false;
      }
      if (!e14_24) {
          adj_matrix[14][24] = false;
          adj_matrix[24][14] = false;
      }
      if (!e24_34) {
          adj_matrix[24][34] = false;
          adj_matrix[34][24] = false;
      }
      if (!e34_44) {
          adj_matrix[34][44] = false;
          adj_matrix[44][34] = false;
      }
      if (!e44_54) {
          adj_matrix[44][54] = false;
          adj_matrix[54][44] = false;
      }
      if (!e54_64) {
          adj_matrix[54][64] = false;
          adj_matrix[64][54] = false;
      }
      if (!e64_74) {
          adj_matrix[64][74] = false;
          adj_matrix[74][64] = false;
      }
      if (!e74_84) {
          adj_matrix[74][84] = false;
          adj_matrix[84][74] = false;
      }
      if (!e84_94) {
          adj_matrix[84][94] = false;
          adj_matrix[94][84] = false;
      } if (!e5_15) {
          adj_matrix[5][15] = false;
          adj_matrix[15][5] = false;
      }
      if (!e15_25) {
          adj_matrix[15][25] = false;
          adj_matrix[25][15] = false;
      }
      if (!e25_35) {
          adj_matrix[25][35] = false;
          adj_matrix[35][25] = false;
      }
      if (!e35_45) {
          adj_matrix[35][45] = false;
          adj_matrix[45][35] = false;
      }
      if (!e45_55) {
          adj_matrix[45][55] = false;
          adj_matrix[55][45] = false;
      }
      if (!e55_65) {
          adj_matrix[55][65] = false;
          adj_matrix[65][55] = false;
      }
      if (!e65_75) {
          adj_matrix[65][75] = false;
          adj_matrix[75][65] = false;
      }
      if (!e75_85) {
          adj_matrix[75][85] = false;
          adj_matrix[85][75] = false;
      }
      if (!e85_95) {
          adj_matrix[85][95] = false;
          adj_matrix[95][85] = false;
      } if (!e6_16) {
          adj_matrix[6][16] = false;
          adj_matrix[16][6] = false;
      }
      if (!e16_26) {
          adj_matrix[16][26] = false;
          adj_matrix[26][16] = false;
      }
      if (!e26_36) {
          adj_matrix[26][36] = false;
          adj_matrix[36][26] = false;
      }
      if (!e36_46) {
          adj_matrix[36][46] = false;
          adj_matrix[46][36] = false;
      }
      if (!e46_56) {
          adj_matrix[46][56] = false;
          adj_matrix[56][46] = false;
      }
      if (!e56_66) {
          adj_matrix[56][66] = false;
          adj_matrix[66][56] = false;
      }
      if (!e66_76) {
          adj_matrix[66][76] = false;
          adj_matrix[76][66] = false;
      }
      if (!e76_86) {
          adj_matrix[76][86] = false;
          adj_matrix[86][76] = false;
      }
      if (!e86_96) {
          adj_matrix[86][96] = false;
          adj_matrix[96][86] = false;
      } if (!e7_17) {
          adj_matrix[7][17] = false;
          adj_matrix[17][7] = false;
      }
      if (!e17_27) {
          adj_matrix[17][27] = false;
          adj_matrix[27][17] = false;
      }
      if (!e27_37) {
          adj_matrix[27][37] = false;
          adj_matrix[37][27] = false;
      }
      if (!e37_47) {
          adj_matrix[37][47] = false;
          adj_matrix[47][37] = false;
      }
      if (!e47_57) {
          adj_matrix[47][57] = false;
          adj_matrix[57][47] = false;
      }
      if (!e57_67) {
          adj_matrix[57][67] = false;
          adj_matrix[67][57] = false;
      }
      if (!e67_77) {
          adj_matrix[67][77] = false;
          adj_matrix[77][67] = false;
      }
      if (!e77_87) {
          adj_matrix[77][87] = false;
          adj_matrix[87][77] = false;
      }
      if (!e87_97) {
          adj_matrix[87][97] = false;
          adj_matrix[97][87] = false;
      } if (!e8_18) {
          adj_matrix[8][18] = false;
          adj_matrix[18][8] = false;
      }
      if (!e18_28) {
          adj_matrix[18][28] = false;
          adj_matrix[28][18] = false;
      }
      if (!e28_38) {
          adj_matrix[28][38] = false;
          adj_matrix[38][28] = false;
      }
      if (!e38_48) {
          adj_matrix[38][48] = false;
          adj_matrix[48][38] = false;
      }
      if (!e48_58) {
          adj_matrix[48][58] = false;
          adj_matrix[58][48] = false;
      }
      if (!e58_68) {
          adj_matrix[58][68] = false;
          adj_matrix[68][58] = false;
      }
      if (!e68_78) {
          adj_matrix[68][78] = false;
          adj_matrix[78][68] = false;
      }
      if (!e78_88) {
          adj_matrix[78][88] = false;
          adj_matrix[88][78] = false;
      }
      if (!e88_98) {
          adj_matrix[88][98] = false;
          adj_matrix[98][88] = false;
      }
      if (!e9_19) {
          adj_matrix[9][19] = false;
          adj_matrix[19][9] = false;
      }
      if (!e19_29) {
          adj_matrix[19][29] = false;
          adj_matrix[29][19] = false;
      }
      if (!e29_39) {
          adj_matrix[29][39] = false;
          adj_matrix[39][29] = false;
      }
      if (!e39_49) {
          adj_matrix[39][49] = false;
          adj_matrix[49][39] = false;
      }
      if (!e49_59) {
          adj_matrix[49][59] = false;
          adj_matrix[59][49] = false;
      }
      if (!e59_69) {
          adj_matrix[59][69] = false;
          adj_matrix[69][59] = false;
      }
      if (!e69_79) {
          adj_matrix[69][79] = false;
          adj_matrix[79][69] = false;
      }
      if (!e79_89) {
          adj_matrix[79][89] = false;
          adj_matrix[89][79] = false;
      }
      if (!e89_99) {
          adj_matrix[89][99] = false;
          adj_matrix[99][89] = false;
      }
      traverse(adj_matrix, start);
      bfs(adj_matrix, start, target);
}

void traverse(vector<vector<bool>>& adj_matrix, int start) {
    queue<int>q;
    bool* test = new bool[100];
    int curr;
    vector<bool> visited((int)adj_matrix.size(), false);
    visited[start] = true;
    q.push(start);
    while (!q.empty()) {
        curr = q.front();
        for (int i = 0; i < 100; i++) {
            if (curr == i)
                test[i] = true;
        }
        q.pop();
        for (int i = 0; i < (int)adj_matrix.size(); i++) {
            if (adj_matrix[curr][i] && !visited[i]) {
                q.push(i);
                visited[i] = true;
            }
        }
    }
    bool flage = false;
    for (int i = 0; i < 100; i++) {
        if (visited[i] == false) {
            flage = true;
            if(i==0) this->cell0->BackColor = System::Drawing::Color::OrangeRed;
            if (i == 1) this->cell1->BackColor = System::Drawing::Color::OrangeRed;
            if (i == 2) this->cell2->BackColor = System::Drawing::Color::OrangeRed;
            if (i == 3) this->cell3->BackColor = System::Drawing::Color::OrangeRed;
            if (i == 4) this->cell4->BackColor = System::Drawing::Color::OrangeRed;
            if (i == 5) this->cell5->BackColor = System::Drawing::Color::OrangeRed;
            if (i == 6) this->cell6->BackColor = System::Drawing::Color::OrangeRed;
            if (i == 7) this->cell7->BackColor = System::Drawing::Color::OrangeRed;
            if (i == 8) this->cell8->BackColor = System::Drawing::Color::OrangeRed;
            if (i == 9) this->cell9->BackColor = System::Drawing::Color::OrangeRed;
            if (i == 10) this->cell10->BackColor = System::Drawing::Color::OrangeRed;
            if (i == 11) this->cell11->BackColor = System::Drawing::Color::OrangeRed;
            if (i == 12) this->cell12->BackColor = System::Drawing::Color::OrangeRed;
            if (i == 13) this->cell13->BackColor = System::Drawing::Color::OrangeRed;
            if (i == 14) this->cell14->BackColor = System::Drawing::Color::OrangeRed;
            if (i == 15) this->cell15->BackColor = System::Drawing::Color::OrangeRed;
            if (i == 16) this->cell16->BackColor = System::Drawing::Color::OrangeRed;
            if (i == 17) this->cell17->BackColor = System::Drawing::Color::OrangeRed;
            if (i == 18) this->cell18->BackColor = System::Drawing::Color::OrangeRed;
            if (i == 19) this->cell19->BackColor = System::Drawing::Color::OrangeRed;
            if (i == 20) this->cell20->BackColor = System::Drawing::Color::OrangeRed;
            if (i == 21) this->cell21->BackColor = System::Drawing::Color::OrangeRed;
            if (i == 22) this->cell22->BackColor = System::Drawing::Color::OrangeRed;
            if (i == 23) this->cell23->BackColor = System::Drawing::Color::OrangeRed; 
            if (i == 24) this->cell24->BackColor = System::Drawing::Color::OrangeRed;
            if (i == 25) this->cell25->BackColor = System::Drawing::Color::OrangeRed;
            if (i == 26) this->cell26->BackColor = System::Drawing::Color::OrangeRed;
            if (i == 27) this->cell27->BackColor = System::Drawing::Color::OrangeRed;
            if (i == 28) this->cell28->BackColor = System::Drawing::Color::OrangeRed;
            if (i == 29) this->cell29->BackColor = System::Drawing::Color::OrangeRed;
            if (i == 30) this->cell30->BackColor = System::Drawing::Color::OrangeRed;
            if (i == 31) this->cell31->BackColor = System::Drawing::Color::OrangeRed;
            if (i == 32) this->cell32->BackColor = System::Drawing::Color::OrangeRed;
            if (i == 33) this->cell33->BackColor = System::Drawing::Color::OrangeRed;
            if (i == 34) this->cell34->BackColor = System::Drawing::Color::OrangeRed;
            if (i == 35) this->cell35->BackColor = System::Drawing::Color::OrangeRed;
            if (i == 36) this->cell36->BackColor = System::Drawing::Color::OrangeRed;
            if (i == 37) this->cell37->BackColor = System::Drawing::Color::OrangeRed;
            if (i == 38) this->cell38->BackColor = System::Drawing::Color::OrangeRed;
            if (i == 39) this->cell39->BackColor = System::Drawing::Color::OrangeRed;
            if (i == 40) this->cell40->BackColor = System::Drawing::Color::OrangeRed;
            if (i == 41) this->cell41->BackColor = System::Drawing::Color::OrangeRed;
            if (i == 42) this->cell42->BackColor = System::Drawing::Color::OrangeRed;
            if (i == 43) this->cell43->BackColor = System::Drawing::Color::OrangeRed;
            if (i == 44) this->cell44->BackColor = System::Drawing::Color::OrangeRed;
            if (i == 45) this->cell45->BackColor = System::Drawing::Color::OrangeRed;
            if (i == 46) this->cell46->BackColor = System::Drawing::Color::OrangeRed;
            if (i == 47) this->cell47->BackColor = System::Drawing::Color::OrangeRed;
            if (i == 48) this->cell48->BackColor = System::Drawing::Color::OrangeRed;
            if (i == 49) this->cell49->BackColor = System::Drawing::Color::OrangeRed;
            if (i == 50) this->cell50->BackColor = System::Drawing::Color::OrangeRed;
            if (i == 51) this->cell51->BackColor = System::Drawing::Color::OrangeRed;
            if (i == 52) this->cell52->BackColor = System::Drawing::Color::OrangeRed;
            if (i == 53) this->cell53->BackColor = System::Drawing::Color::OrangeRed;
            if (i == 54) this->cell54->BackColor = System::Drawing::Color::OrangeRed;
            if (i == 55) this->cell55->BackColor = System::Drawing::Color::OrangeRed;
            if (i == 56) this->cell56->BackColor = System::Drawing::Color::OrangeRed;
            if (i == 57) this->cell57->BackColor = System::Drawing::Color::OrangeRed;
            if (i == 58) this->cell58->BackColor = System::Drawing::Color::OrangeRed;
            if (i == 59) this->cell59->BackColor = System::Drawing::Color::OrangeRed;
            if (i == 60) this->cell60->BackColor = System::Drawing::Color::OrangeRed;
            if (i == 61) this->cell61->BackColor = System::Drawing::Color::OrangeRed;
            if (i == 62) this->cell62->BackColor = System::Drawing::Color::OrangeRed;
            if (i == 63) this->cell63->BackColor = System::Drawing::Color::OrangeRed; 
            if (i == 64) this->cell64->BackColor = System::Drawing::Color::OrangeRed;
            if (i == 65) this->cell65->BackColor = System::Drawing::Color::OrangeRed;
            if (i == 66) this->cell66->BackColor = System::Drawing::Color::OrangeRed;
            if (i == 67) this->cell67->BackColor = System::Drawing::Color::OrangeRed;
            if (i == 68) this->cell68->BackColor = System::Drawing::Color::OrangeRed;
            if (i == 69) this->cell69->BackColor = System::Drawing::Color::OrangeRed;
            if (i == 70) this->cell70->BackColor = System::Drawing::Color::OrangeRed;
            if (i == 71) this->cell71->BackColor = System::Drawing::Color::OrangeRed;
            if (i == 72) this->cell72->BackColor = System::Drawing::Color::OrangeRed;
            if (i == 73) this->cell73->BackColor = System::Drawing::Color::OrangeRed;
            if (i == 74) this->cell74->BackColor = System::Drawing::Color::OrangeRed;
            if (i == 75) this->cell75->BackColor = System::Drawing::Color::OrangeRed;
            if (i == 76) this->cell76->BackColor = System::Drawing::Color::OrangeRed;
            if (i == 77) this->cell77->BackColor = System::Drawing::Color::OrangeRed;
            if (i == 78) this->cell78->BackColor = System::Drawing::Color::OrangeRed;
            if (i == 79) this->cell79->BackColor = System::Drawing::Color::OrangeRed;
            if (i == 80) this->cell80->BackColor = System::Drawing::Color::OrangeRed;
            if (i == 81) this->cell81->BackColor = System::Drawing::Color::OrangeRed;
            if (i == 82) this->cell82->BackColor = System::Drawing::Color::OrangeRed;
            if (i == 83) this->cell83->BackColor = System::Drawing::Color::OrangeRed;
            if (i == 84) this->cell84->BackColor = System::Drawing::Color::OrangeRed;
            if (i == 85) this->cell85->BackColor = System::Drawing::Color::OrangeRed;
            if (i == 86) this->cell86->BackColor = System::Drawing::Color::OrangeRed;
            if (i == 87) this->cell87->BackColor = System::Drawing::Color::OrangeRed;
            if (i == 88) this->cell88->BackColor = System::Drawing::Color::OrangeRed;
            if (i == 89) this->cell89->BackColor = System::Drawing::Color::OrangeRed;
            if (i == 90) this->cell90->BackColor = System::Drawing::Color::OrangeRed;
            if (i == 91) this->cell91->BackColor = System::Drawing::Color::OrangeRed;
            if (i == 92) this->cell92->BackColor = System::Drawing::Color::OrangeRed;
            if (i == 93) this->cell93->BackColor = System::Drawing::Color::OrangeRed;
            if (i == 94) this->cell94->BackColor = System::Drawing::Color::OrangeRed;
            if (i == 95) this->cell95->BackColor = System::Drawing::Color::OrangeRed;
            if (i == 96) this->cell96->BackColor = System::Drawing::Color::OrangeRed;
            if (i == 97) this->cell97->BackColor = System::Drawing::Color::OrangeRed;
            if (i == 98) this->cell98->BackColor = System::Drawing::Color::OrangeRed;
            if (i == 99) this->cell99->BackColor = System::Drawing::Color::OrangeRed;
        }
        if (flage) {
            this->label3->Text = L"There are cells that \r\n BMO can\'t reach!";
        }
    }    
}

void bfs(vector<vector<bool>>& adj_matrix, int start, int target) {
    queue<int> q;
    int curr;
    vector<bool> visited((int)adj_matrix.size(), false);
    vector<int> parent((int)adj_matrix.size(), -1);
    visited[start] = true;
    q.push(start);

    while (!q.empty()) {
        curr = q.front();
        q.pop();
        if (curr == target) {
            vector<int> p;
            p.push_back(target);
            int node = parent[target];
            while (node != start) {
                p.push_back(node);
                node = parent[node];
            }
            p.push_back(start);
            reverse(p.begin(), p.end());
            for (int i = 1; i < (int)p.size()-1; i++) {
                if (p[i] == 0) this->cell0->BackColor = System::Drawing::Color::LightGreen;
                if (p[i] == 1) this->cell1->BackColor = System::Drawing::Color::LightGreen;
                if (p[i] == 2) this->cell2->BackColor = System::Drawing::Color::LightGreen;
                if (p[i] == 3) this->cell3->BackColor = System::Drawing::Color::LightGreen;
                if (p[i] == 4) this->cell4->BackColor = System::Drawing::Color::LightGreen;
                if (p[i] == 5) this->cell5->BackColor = System::Drawing::Color::LightGreen;
                if (p[i] == 6) this->cell6->BackColor = System::Drawing::Color::LightGreen;
                if (p[i] == 7) this->cell7->BackColor = System::Drawing::Color::LightGreen;
                if (p[i] == 8) this->cell8->BackColor = System::Drawing::Color::LightGreen;
                if (p[i] == 9) this->cell9->BackColor = System::Drawing::Color::LightGreen;
                if (p[i] == 10) this->cell10->BackColor = System::Drawing::Color::LightGreen;
                if (p[i] == 11) this->cell11->BackColor = System::Drawing::Color::LightGreen;
                if (p[i] == 12) this->cell12->BackColor = System::Drawing::Color::LightGreen;
                if (p[i] == 13) this->cell13->BackColor = System::Drawing::Color::LightGreen;
                if (p[i] == 14) this->cell14->BackColor = System::Drawing::Color::LightGreen;
                if (p[i] == 15) this->cell15->BackColor = System::Drawing::Color::LightGreen;
                if (p[i] == 16) this->cell16->BackColor = System::Drawing::Color::LightGreen;
                if (p[i] == 17) this->cell17->BackColor = System::Drawing::Color::LightGreen;
                if (p[i] == 18) this->cell18->BackColor = System::Drawing::Color::LightGreen;
                if (p[i] == 19) this->cell19->BackColor = System::Drawing::Color::LightGreen;
                if (p[i] == 20) this->cell20->BackColor = System::Drawing::Color::LightGreen;
                if (p[i] == 20) this->cell20->BackColor = System::Drawing::Color::LightGreen;
                if (p[i] == 20) this->cell20->BackColor = System::Drawing::Color::LightGreen;
                if (p[i] == 21) this->cell21->BackColor = System::Drawing::Color::LightGreen;
                if (p[i] == 22) this->cell22->BackColor = System::Drawing::Color::LightGreen;
                if (p[i] == 23) this->cell23->BackColor = System::Drawing::Color::LightGreen;
                if (p[i] == 24) this->cell24->BackColor = System::Drawing::Color::LightGreen;
                if (p[i] == 25) this->cell25->BackColor = System::Drawing::Color::LightGreen;
                if (p[i] == 26) this->cell26->BackColor = System::Drawing::Color::LightGreen;
                if (p[i] == 27) this->cell27->BackColor = System::Drawing::Color::LightGreen;
                if (p[i] == 28) this->cell28->BackColor = System::Drawing::Color::LightGreen;
                if (p[i] == 29) this->cell29->BackColor = System::Drawing::Color::LightGreen;
                if (p[i] == 30) this->cell30->BackColor = System::Drawing::Color::LightGreen;
                if (p[i] == 31) this->cell31->BackColor = System::Drawing::Color::LightGreen;
                if (p[i] == 32) this->cell32->BackColor = System::Drawing::Color::LightGreen;
                if (p[i] == 33) this->cell33->BackColor = System::Drawing::Color::LightGreen;
                if (p[i] == 34) this->cell34->BackColor = System::Drawing::Color::LightGreen;
                if (p[i] == 35) this->cell35->BackColor = System::Drawing::Color::LightGreen;
                if (p[i] == 36) this->cell36->BackColor = System::Drawing::Color::LightGreen;
                if (p[i] == 37) this->cell37->BackColor = System::Drawing::Color::LightGreen;
                if (p[i] == 38) this->cell38->BackColor = System::Drawing::Color::LightGreen;
                if (p[i] == 39) this->cell39->BackColor = System::Drawing::Color::LightGreen;
                if (p[i] == 40) this->cell40->BackColor = System::Drawing::Color::LightGreen;
                if (p[i] == 41) this->cell41->BackColor = System::Drawing::Color::LightGreen;
                if (p[i] == 42) this->cell42->BackColor = System::Drawing::Color::LightGreen;
                if (p[i] == 43) this->cell43->BackColor = System::Drawing::Color::LightGreen;
                if (p[i] == 44) this->cell44->BackColor = System::Drawing::Color::LightGreen;
                if (p[i] == 45) this->cell45->BackColor = System::Drawing::Color::LightGreen;
                if (p[i] == 46) this->cell46->BackColor = System::Drawing::Color::LightGreen;
                if (p[i] == 47) this->cell47->BackColor = System::Drawing::Color::LightGreen;
                if (p[i] == 48) this->cell48->BackColor = System::Drawing::Color::LightGreen;
                if (p[i] == 49) this->cell49->BackColor = System::Drawing::Color::LightGreen;
                if (p[i] == 50) this->cell50->BackColor = System::Drawing::Color::LightGreen;
                if (p[i] == 51) this->cell51->BackColor = System::Drawing::Color::LightGreen;
                if (p[i] == 52) this->cell52->BackColor = System::Drawing::Color::LightGreen;
                if (p[i] == 53) this->cell53->BackColor = System::Drawing::Color::LightGreen;
                if (p[i] == 54) this->cell54->BackColor = System::Drawing::Color::LightGreen;
                if (p[i] == 55) this->cell55->BackColor = System::Drawing::Color::LightGreen;
                if (p[i] == 56) this->cell56->BackColor = System::Drawing::Color::LightGreen;
                if (p[i] == 57) this->cell57->BackColor = System::Drawing::Color::LightGreen;
                if (p[i] == 58) this->cell58->BackColor = System::Drawing::Color::LightGreen;
                if (p[i] == 59) this->cell59->BackColor = System::Drawing::Color::LightGreen;
                if (p[i] == 60) this->cell60->BackColor = System::Drawing::Color::LightGreen;
                if (p[i] == 61) this->cell61->BackColor = System::Drawing::Color::LightGreen;
                if (p[i] == 62) this->cell62->BackColor = System::Drawing::Color::LightGreen;
                if (p[i] == 63) this->cell63->BackColor = System::Drawing::Color::LightGreen;
                if (p[i] == 64) this->cell64->BackColor = System::Drawing::Color::LightGreen;
                if (p[i] == 65) this->cell65->BackColor = System::Drawing::Color::LightGreen;
                if (p[i] == 66) this->cell66->BackColor = System::Drawing::Color::LightGreen;
                if (p[i] == 67) this->cell67->BackColor = System::Drawing::Color::LightGreen;
                if (p[i] == 68) this->cell68->BackColor = System::Drawing::Color::LightGreen;
                if (p[i] == 69) this->cell69->BackColor = System::Drawing::Color::LightGreen;
                if (p[i] == 70) this->cell70->BackColor = System::Drawing::Color::LightGreen;
                if (p[i] == 71) this->cell71->BackColor = System::Drawing::Color::LightGreen;
                if (p[i] == 72) this->cell72->BackColor = System::Drawing::Color::LightGreen;
                if (p[i] == 73) this->cell73->BackColor = System::Drawing::Color::LightGreen;
                if (p[i] == 74) this->cell74->BackColor = System::Drawing::Color::LightGreen;
                if (p[i] == 75) this->cell75->BackColor = System::Drawing::Color::LightGreen;
                if (p[i] == 76) this->cell76->BackColor = System::Drawing::Color::LightGreen;
                if (p[i] == 77) this->cell77->BackColor = System::Drawing::Color::LightGreen;
                if (p[i] == 78) this->cell78->BackColor = System::Drawing::Color::LightGreen;
                if (p[i] == 79) this->cell79->BackColor = System::Drawing::Color::LightGreen;
                if (p[i] == 80) this->cell80->BackColor = System::Drawing::Color::LightGreen;
                if (p[i] == 81) this->cell81->BackColor = System::Drawing::Color::LightGreen;
                if (p[i] == 82) this->cell82->BackColor = System::Drawing::Color::LightGreen;
                if (p[i] == 83) this->cell83->BackColor = System::Drawing::Color::LightGreen;
                if (p[i] == 84) this->cell84->BackColor = System::Drawing::Color::LightGreen;
                if (p[i] == 85) this->cell85->BackColor = System::Drawing::Color::LightGreen;
                if (p[i] == 86) this->cell86->BackColor = System::Drawing::Color::LightGreen;
                if (p[i] == 87) this->cell87->BackColor = System::Drawing::Color::LightGreen;
                if (p[i] == 88) this->cell88->BackColor = System::Drawing::Color::LightGreen;
                if (p[i] == 89) this->cell89->BackColor = System::Drawing::Color::LightGreen;
                if (p[i] == 90) this->cell90->BackColor = System::Drawing::Color::LightGreen;
                if (p[i] == 91) this->cell91->BackColor = System::Drawing::Color::LightGreen;
                if (p[i] == 92) this->cell92->BackColor = System::Drawing::Color::LightGreen;
                if (p[i] == 93) this->cell93->BackColor = System::Drawing::Color::LightGreen;
                if (p[i] == 94) this->cell94->BackColor = System::Drawing::Color::LightGreen;
                if (p[i] == 95) this->cell95->BackColor = System::Drawing::Color::LightGreen;
                if (p[i] == 96) this->cell96->BackColor = System::Drawing::Color::LightGreen;
                if (p[i] == 97) this->cell97->BackColor = System::Drawing::Color::LightGreen;
                if (p[i] == 98) this->cell98->BackColor = System::Drawing::Color::LightGreen;
                if (p[i] == 99) this->cell99->BackColor = System::Drawing::Color::LightGreen;
            }              
        }
        for (int i = 0; i < (int)adj_matrix.size(); i++) {
            if (adj_matrix[curr][i] == true && !visited[i]) {
                parent[i] = curr;
                q.push(i);
                visited[i] = true;
            }
        }
    }
}
};
}