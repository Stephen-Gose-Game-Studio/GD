/**

Game Develop - Particle System Extension
Copyright (c) 2010 Florian Rival (Florian.Rival@gmail.com)

This software is provided 'as-is', without any express or implied
warranty. In no event will the authors be held liable for any damages
arising from the use of this software.

Permission is granted to anyone to use this software for any purpose,
including commercial applications, and to alter it and redistribute it
freely, subject to the following restrictions:

    1. The origin of this software must not be misrepresented; you must not
    claim that you wrote the original software. If you use this software
    in a product, an acknowledgment in the product documentation would be
    appreciated but is not required.

    2. Altered source versions must be plainly marked as such, and must not be
    misrepresented as being the original software.

    3. This notice may not be removed or altered from any source
    distribution.

*/

#if defined(GDE)

#ifndef PARTICLEEMITTEROBJECTEDITOR_H
#define PARTICLEEMITTEROBJECTEDITOR_H

//(*Headers(ParticleEmitterObjectEditor)
#include <wx/notebook.h>
#include <wx/sizer.h>
#include <wx/stattext.h>
#include <wx/textctrl.h>
#include <wx/checkbox.h>
#include <wx/spinctrl.h>
#include <wx/statline.h>
#include <wx/radiobut.h>
#include <wx/panel.h>
#include <wx/bmpbuttn.h>
#include <wx/button.h>
#include <wx/dialog.h>
#include <wx/clrpicker.h>
//*)
#include <wx/aui/aui.h>
class Game;
class ParticleEmitterObject;
class MainEditorCommand;
class EditorImages;

class ParticleEmitterObjectEditor: public wxDialog
{
	public:

		ParticleEmitterObjectEditor( wxWindow* parent, Game & game_, ParticleEmitterObject & object_, MainEditorCommand & mainEditorCommand_ );
		virtual ~ParticleEmitterObjectEditor();

		//(*Declarations(ParticleEmitterObjectEditor)
		wxStaticText* StaticText10;
		wxTextCtrl* gravityXEdit;
		wxRadioButton* simpleSizeRandomCheck;
		wxStaticText* StaticText22;
		wxRadioButton* simpleAngleRandomCheck;
		wxPanel* Core;
		wxStaticText* StaticText9;
		wxStaticText* StaticText53;
		wxStaticText* StaticText20;
		wxStaticText* rendererParam1Txt;
		wxStaticText* StaticText45;
		wxSpinCtrlDouble* simpleSize1Edit;
		wxRadioButton* angleMutableCheck;
		wxColourPickerCtrl* simpleColor1Bt;
		wxPanel* Panel5;
		wxSpinCtrlDouble* simpleAngle2Edit;
		wxSpinCtrlDouble* green2Edit;
		wxStaticText* StaticText29;
		wxSpinCtrlDouble* angle2Edit;
		wxTextCtrl* frictionEdit;
		wxSpinCtrlDouble* simpleSize2Edit;
		wxCheckBox* infiniteTankCheck;
		wxStaticText* StaticText37;
		wxNotebook* emissionNotebook;
		wxStaticText* StaticText33;
		wxStaticText* StaticText13;
		wxStaticText* StaticText2;
		wxTextCtrl* tankEdit;
		wxPanel* Panel4;
		wxStaticText* StaticText30;
		wxStaticText* StaticText14;
		wxTextCtrl* simpleRadiusEdit;
		wxRadioButton* blueFixedCheck;
		wxTextCtrl* simpleFrictionEdit;
		wxRadioButton* quadCheck;
		wxRadioButton* simpleSizeMutableCheck;
		wxRadioButton* additiveRenderingCheck;
		wxStaticText* StaticText6;
		wxStaticText* StaticText26;
		wxSpinCtrlDouble* size1Edit;
		wxTextCtrl* simpleGravityAngleEdit;
		wxTextCtrl* emitterAngleAEdit;
		wxStaticText* StaticText40;
		wxSpinCtrlDouble* blue2Edit;
		wxRadioButton* simpleAngleMutableCheck;
		wxRadioButton* alphaRenderingCheck;
		wxTextCtrl* emitterDirYEdit;
		wxStaticText* StaticText32;
		wxStaticText* StaticText42;
		wxStaticText* StaticText19;
		wxStaticText* StaticText8;
		wxSpinCtrlDouble* simpleOpacity2Edit;
		wxStaticText* StaticText38;
		wxStaticText* StaticText11;
		wxTextCtrl* lifeTimeMaxEdit;
		wxStaticText* StaticText18;
		wxStaticText* StaticText50;
		wxStaticText* StaticText31;
		wxPanel* Panel1;
		wxRadioButton* pointCheck;
		wxStaticText* StaticText1;
		wxSpinCtrlDouble* red1Edit;
		wxStaticText* StaticText58;
		wxStaticText* StaticText27;
		wxRadioButton* blueMutableCheck;
		wxStaticText* StaticText3;
		wxButton* cancelBt;
		wxTextCtrl* textureEdit;
		wxStaticText* StaticText54;
		wxRadioButton* alphaMutableCheck;
		wxPanel* Panel6;
		wxStaticText* StaticText44;
		wxPanel* Panel3;
		wxStaticText* StaticText21;
		wxStaticText* StaticText56;
		wxStaticText* StaticText39;
		wxTextCtrl* gravityZEdit;
		wxButton* imageBankBt;
		wxStaticText* StaticText55;
		wxStaticText* StaticText23;
		wxRadioButton* blueRandomCheck;
		wxStaticText* StaticText24;
		wxSpinCtrlDouble* blue1Edit;
		wxRadioButton* redMutableCheck;
		wxStaticText* StaticText49;
		wxRadioButton* angleNothingCheck;
		wxTextCtrl* emitterDirZEdit;
		wxSpinCtrlDouble* alpha1Edit;
		wxRadioButton* sizeMutableCheck;
		wxStaticText* StaticText34;
		wxStaticText* StaticText5;
		wxRadioButton* alphaFixedCheck;
		wxStaticText* StaticText7;
		wxRadioButton* angleRandomCheck;
		wxStaticText* StaticText57;
		wxRadioButton* lineCheck;
		wxTextCtrl* maxParticleNbEdit;
		wxRadioButton* redRandomCheck;
		wxTextCtrl* gravityYEdit;
		wxRadioButton* greenFixedCheck;
		wxRadioButton* greenMutableCheck;
		wxStaticLine* StaticLine1;
		wxStaticText* StaticText47;
		wxTextCtrl* lifeTimeMinEdit;
		wxStaticText* rendererParam2Txt;
		wxSpinCtrlDouble* alpha2Edit;
		wxStaticText* StaticText52;
		wxNotebook* particleNotebook;
		wxTextCtrl* emitterDirXEdit;
		wxSpinCtrlDouble* red2Edit;
		wxRadioButton* redFixedCheck;
		wxRadioButton* alphaRandomCheck;
		wxStaticText* StaticText28;
		wxStaticText* StaticText43;
		wxStaticText* StaticText41;
		wxStaticText* StaticText15;
		wxStaticText* StaticText12;
		wxTextCtrl* simpleConeAngleEdit;
		wxStaticText* textureTxt;
		wxTextCtrl* emitterAngleBEdit;
		wxStaticText* StaticText35;
		wxSpinCtrlDouble* angle1Edit;
		wxBitmapButton* imageChooseBt;
		wxTextCtrl* emitterForceMinEdit;
		wxSpinCtrlDouble* green1Edit;
		wxPanel* Panel2;
		wxSpinCtrlDouble* size2Edit;
		wxTextCtrl* rendererParam2Edit;
		wxNotebook* gravityNotebook;
		wxTextCtrl* flowEdit;
		wxStaticText* StaticText59;
		wxStaticText* StaticText25;
		wxRadioButton* sizeRandomCheck;
		wxSpinCtrlDouble* simpleOpacityEdit;
		wxTextCtrl* zoneRadiusEdit;
		wxStaticText* StaticText36;
		wxStaticText* StaticText4;
		wxStaticText* StaticText17;
		wxStaticText* StaticText48;
		wxTextCtrl* simpleAngleEdit;
		wxButton* okBt;
		wxRadioButton* sizeNothingCheck;
		wxStaticText* StaticText16;
		wxSpinCtrlDouble* simpleAngle1Edit;
		wxTextCtrl* rendererParam1Edit;
		wxTextCtrl* simpleGravityLengthEdit;
		wxStaticText* StaticText46;
		wxStaticText* StaticText51;
		wxRadioButton* greenRandomCheck;
		wxColourPickerCtrl* simpleColor2Bt;
		wxTextCtrl* emitterForceMaxEdit;
		//*)
		EditorImages * editorImagesPnl;

	protected:

		//(*Identifiers(ParticleEmitterObjectEditor)
		static const long ID_STATICTEXT7;
		static const long ID_RADIOBUTTON2;
		static const long ID_RADIOBUTTON1;
		static const long ID_RADIOBUTTON3;
		static const long ID_STATICTEXT9;
		static const long ID_TEXTCTRL9;
		static const long ID_STATICTEXT10;
		static const long ID_TEXTCTRL10;
		static const long ID_STATICTEXT32;
		static const long ID_TEXTCTRL13;
		static const long ID_BITMAPBUTTON1;
		static const long ID_RADIOBUTTON22;
		static const long ID_RADIOBUTTON23;
		static const long ID_STATICTEXT29;
		static const long ID_TEXTCTRL11;
		static const long ID_STATICTEXT30;
		static const long ID_TEXTCTRL12;
		static const long ID_STATICTEXT31;
		static const long ID_STATICTEXT40;
		static const long ID_COLOURPICKERCTRL1;
		static const long ID_STATICTEXT41;
		static const long ID_COLOURPICKERCTRL2;
		static const long ID_STATICTEXT42;
		static const long ID_CUSTOM12;
		static const long ID_STATICTEXT61;
		static const long ID_CUSTOM17;
		static const long ID_RADIOBUTTON25;
		static const long ID_RADIOBUTTON24;
		static const long ID_STATICTEXT43;
		static const long ID_CUSTOM13;
		static const long ID_STATICTEXT56;
		static const long ID_STATICTEXT55;
		static const long ID_CUSTOM14;
		static const long ID_STATICTEXT54;
		static const long ID_STATICTEXT57;
		static const long ID_RADIOBUTTON26;
		static const long ID_RADIOBUTTON27;
		static const long ID_STATICTEXT44;
		static const long ID_CUSTOM15;
		static const long ID_STATICTEXT58;
		static const long ID_STATICTEXT59;
		static const long ID_CUSTOM16;
		static const long ID_STATICTEXT60;
		static const long ID_PANEL3;
		static const long ID_STATICTEXT62;
		static const long ID_TEXTCTRL24;
		static const long ID_RADIOBUTTON6;
		static const long ID_RADIOBUTTON5;
		static const long ID_RADIOBUTTON4;
		static const long ID_STATICTEXT11;
		static const long ID_STATICTEXT13;
		static const long ID_SPINCTRL1;
		static const long ID_STATICTEXT12;
		static const long ID_CUSTOM1;
		static const long ID_RADIOBUTTON10;
		static const long ID_RADIOBUTTON11;
		static const long ID_RADIOBUTTON12;
		static const long ID_STATICTEXT17;
		static const long ID_STATICTEXT18;
		static const long ID_CUSTOM2;
		static const long ID_STATICTEXT19;
		static const long ID_CUSTOM3;
		static const long ID_RADIOBUTTON7;
		static const long ID_RADIOBUTTON8;
		static const long ID_RADIOBUTTON9;
		static const long ID_STATICTEXT14;
		static const long ID_STATICTEXT15;
		static const long ID_CUSTOM4;
		static const long ID_STATICTEXT16;
		static const long ID_CUSTOM5;
		static const long ID_RADIOBUTTON13;
		static const long ID_RADIOBUTTON14;
		static const long ID_RADIOBUTTON15;
		static const long ID_STATICTEXT20;
		static const long ID_STATICTEXT21;
		static const long ID_CUSTOM6;
		static const long ID_STATICTEXT22;
		static const long ID_CUSTOM7;
		static const long ID_RADIOBUTTON19;
		static const long ID_RADIOBUTTON20;
		static const long ID_RADIOBUTTON21;
		static const long ID_STATICTEXT26;
		static const long ID_STATICTEXT27;
		static const long ID_CUSTOM10;
		static const long ID_STATICTEXT28;
		static const long ID_CUSTOM11;
		static const long ID_RADIOBUTTON16;
		static const long ID_RADIOBUTTON17;
		static const long ID_RADIOBUTTON18;
		static const long ID_STATICTEXT23;
		static const long ID_STATICTEXT24;
		static const long ID_CUSTOM8;
		static const long ID_STATICTEXT25;
		static const long ID_CUSTOM9;
		static const long ID_PANEL2;
		static const long ID_NOTEBOOK1;
		static const long ID_STATICTEXT4;
		static const long ID_STATICTEXT5;
		static const long ID_TEXTCTRL6;
		static const long ID_STATICTEXT6;
		static const long ID_TEXTCTRL7;
		static const long ID_STATICTEXT45;
		static const long ID_TEXTCTRL17;
		static const long ID_STATICTEXT46;
		static const long ID_TEXTCTRL21;
		static const long ID_STATICTEXT47;
		static const long ID_STATICTEXT48;
		static const long ID_TEXTCTRL22;
		static const long ID_STATICTEXT49;
		static const long ID_PANEL5;
		static const long ID_STATICTEXT33;
		static const long ID_TEXTCTRL14;
		static const long ID_STATICTEXT34;
		static const long ID_TEXTCTRL18;
		static const long ID_TEXTCTRL19;
		static const long ID_TEXTCTRL20;
		static const long ID_STATICTEXT36;
		static const long ID_STATICTEXT38;
		static const long ID_TEXTCTRL15;
		static const long ID_STATICTEXT35;
		static const long ID_STATICTEXT39;
		static const long ID_TEXTCTRL16;
		static const long ID_STATICTEXT37;
		static const long ID_PANEL4;
		static const long ID_NOTEBOOK2;
		static const long ID_CHECKBOX1;
		static const long ID_STATICTEXT3;
		static const long ID_TEXTCTRL1;
		static const long ID_STATICTEXT1;
		static const long ID_TEXTCTRL2;
		static const long ID_STATICTEXT50;
		static const long ID_TEXTCTRL23;
		static const long ID_STATICTEXT52;
		static const long ID_TEXTCTRL25;
		static const long ID_STATICTEXT53;
		static const long ID_STATICTEXT51;
		static const long ID_TEXTCTRL26;
		static const long ID_PANEL7;
		static const long ID_STATICTEXT2;
		static const long ID_TEXTCTRL3;
		static const long ID_TEXTCTRL4;
		static const long ID_TEXTCTRL5;
		static const long ID_STATICTEXT8;
		static const long ID_TEXTCTRL8;
		static const long ID_PANEL6;
		static const long ID_NOTEBOOK3;
		static const long ID_STATICLINE1;
		static const long ID_BUTTON3;
		static const long ID_BUTTON1;
		static const long ID_BUTTON2;
		static const long ID_PANEL1;
		//*)

	private:

		//(*Handlers(ParticleEmitterObjectEditor)
		void OnokBtClick(wxCommandEvent& event);
		void OncolorBtClick(wxCommandEvent& event);
		void OnfontBtClick(wxCommandEvent& event);
		void OnSizeEditChange(wxSpinEvent& event);
		void OncancelBtClick(wxCommandEvent& event);
		void OninfiniteTankCheckClick(wxCommandEvent& event);
		void OnpointCheckSelect(wxCommandEvent& event);
		void OnLineCheckSelect(wxCommandEvent& event);
		void OnQuadCheckSelect(wxCommandEvent& event);
		void OnredFixedCheckSelect(wxCommandEvent& event);
		void OnredRandomCheckSelect(wxCommandEvent& event);
		void OngreenFixedCheckSelect(wxCommandEvent& event);
		void OngreenRandomCheckSelect(wxCommandEvent& event);
		void OnblueFixedCheckSelect(wxCommandEvent& event);
		void OnblueRandomCheckSelect(wxCommandEvent& event);
		void OnalphaFixedCheckSelect(wxCommandEvent& event);
		void OnalphaRandomCheckSelect(wxCommandEvent& event);
		void OnsizeRandomCheckSelect(wxCommandEvent& event);
		void OnsizeNothingCheckSelect(wxCommandEvent& event);
		void OnangleNothingCheckSelect(wxCommandEvent& event);
		void OnangleRandomCheckSelect(wxCommandEvent& event);
		void OnimageChooseBtClick(wxCommandEvent& event);
		void OnimageBankBtClick(wxCommandEvent& event);
		void OnsimpleColor1BtColourChanged(wxColourPickerEvent& event);
		void OnsimpleRadiusEditText(wxCommandEvent& event);
		void OnsimpleAngleText(wxCommandEvent& event);
		void OnsimpleConeAngleText(wxCommandEvent& event);
		void OnsimpleGravityAngleText(wxCommandEvent& event);
		void OnsimpleFrictionEditText(wxCommandEvent& event);
		void OnsimpleSizeRandomCheckSelect(wxCommandEvent& event);
		void OnsimpleSizeMutableCheckSelect(wxCommandEvent& event);
		void OnsimpleAngleMutableCheckSelect(wxCommandEvent& event);
		void OnsimpleAngleRandomCheckSelect(wxCommandEvent& event);
		//*)
		void OnsimpleOpacityEditChange(wxSpinDoubleEvent& event);
		void OnsimpleSizeEditChange(wxSpinDoubleEvent& event);
		void OnsimpleAngleEditChange(wxSpinDoubleEvent& event);
		void PrepareControlsForPointRenderer();
		void PrepareControlsForQuadRenderer();
		void PrepareControlsForLineRenderer();

		Game & game;
		MainEditorCommand & mainEditorCommand;
		ParticleEmitterObject & object;

		wxAuiManager m_mgr; ///< Used to display the image bank editor

		DECLARE_EVENT_TABLE()
};

#endif
#endif