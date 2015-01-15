//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AccessibilityListController.h"

@class PSSpecifier, VoiceOverGestureHelpViewController;

__attribute__((visibility("hidden")))
@interface VoiceOverController : AccessibilityListController
{
    PSSpecifier *_voiceOverOnSpecifier;
    PSSpecifier *_voiceOverGestureHelpSpecifier;
    PSSpecifier *_voiceOverGestureHelpSpacerSpecifier;
    VoiceOverGestureHelpViewController *_gestureHelpViewController;
    _Bool _ignoreNextReload;
}

+ (_Bool)_shouldForwardViewWillTransitionToSize;
+ (void)setVoiceOverEnabled:(_Bool)arg1;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (id)speakingRateInRotor:(id)arg1;
- (void)setSpeakingRateInRotor:(id)arg1 specifier:(id)arg2;
- (id)navigateImagesPreferenceForSpecifier:(id)arg1;
- (id)cursorStyleForSpecifier:(id)arg1;
- (void)cursorStyleSetPreference:(id)arg1 specifier:(id)arg2;
- (id)brailleDisplayNameForSpecifier:(id)arg1;
- (id)compactVoiceEnabled:(id)arg1;
- (void)setCompactVoiceEnabled:(id)arg1 specifier:(id)arg2;
- (id)pitchChangeEnabled:(id)arg1;
- (void)setPitchChangeEnabled:(id)arg1 specifier:(id)arg2;
- (id)soundEffectsEnabled:(id)arg1;
- (void)setSoundEffectsEnabled:(id)arg1 specifier:(id)arg2;
- (id)phoneticsEnabled:(id)arg1;
- (void)setPhoneticsEnabled:(id)arg1 specifier:(id)arg2;
- (void)setTypingFeedback:(id)arg1 specifier:(id)arg2;
- (id)typingFeedback:(id)arg1;
- (void)setTypingMode:(id)arg1 specifier:(id)arg2;
- (id)typingMode:(id)arg1;
- (id)speakNotifications:(id)arg1;
- (void)setSpeakNotifications:(id)arg1 specifier:(id)arg2;
- (id)hintsEnabled:(id)arg1;
- (void)setHintsEnabled:(id)arg1 specifier:(id)arg2;
- (id)speakingRate:(id)arg1;
- (void)setSpeakingRate:(id)arg1 specifier:(id)arg2;
- (id)voiceOverTouchEnabled:(id)arg1;
- (void)startGestureHelp:(id)arg1;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)setVoiceOverTouchEnabled:(id)arg1 specifier:(id)arg2;
- (void)voiceOverActivateWorkaround:(id)arg1;
- (void)_changeVOActivationSpecifierIntoSwitchCell:(id)arg1;
- (void)_changeVOActivationSpecifierIntoButtonCell:(id)arg1;
- (id)specifiers;
- (void)_bluetoothBrailleDisplayChange;
- (void)reload;
- (void)_manageGestureHelpButton;
- (void)viewDidLoad;
- (void)_manageCompactVoiceOption;
- (void)dealloc;
- (id)init;

@end
