//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AXSpringBoardServerInstanceDelegate.h"

@class NSMutableArray, NSString, UIAlertController, UIWindow;

@interface AXSpringBoardServerHelper : NSObject <AXSpringBoardServerInstanceDelegate>
{
    CDUnknownBlockType _alertHandler;
    UIWindow *_presentationWindow;
    NSMutableArray *_visibleTripleClickItems;
    _Bool _shouldOverrideInterfaceOrientation;
    NSMutableArray *_notificationObservers;
    UIAlertController *_zoomConflictController;
    UIAlertController *_zoomTripleClickController;
    UIAlertController *_zoomBuddyUsageController;
    UIAlertController *_switchUsageConfirmedController;
    UIAlertController *_voiceOverUsageConfirmedController;
    UIAlertController *_tripleClickAlertController;
    UIAlertController *_alertControllerToDismissAfterPresentation;
}

+ (id)_wallpaperController;
+ (id)_syncController;
+ (id)_notificationCenterController;
+ (id)_assistantController;
+ (id)_iconController;
+ (id)_lockController;
+ (id)_lockScreenManager;
+ (id)_awayController;
+ (id)_applicationController;
+ (id)_backlightController;
+ (id)_uiController;
+ (void)initialize;
@property(retain, nonatomic) UIAlertController *alertControllerToDismissAfterPresentation; // @synthesize alertControllerToDismissAfterPresentation=_alertControllerToDismissAfterPresentation;
- (void)activeInterfaceOrientationDidChangeToOrientation:(long long)arg1 willAnimateWithDuration:(double)arg2 fromOrientation:(long long)arg3;
- (void)activeInterfaceOrientationWillChangeToOrientation:(long long)arg1;
- (void)_handleZoomInBuddyAlert;
- (void)_handleSwitchUsageConfirmed;
- (void)_handleVoiceOverUsageConfirmation;
- (void)_handleZoomTripleClickAfterConflict;
- (void)_handleZoomConflictAlert:(id)arg1;
- (void)appTransition;
- (void)_handleTripleClickAskAlert;
- (void)dismissAlertWithCancel;
- (void)_cleanupAlertController:(id)arg1;
- (void)_dismissAndReleaseAlertController:(id)arg1;
- (void)_displayAlertController:(id)arg1;
- (void)_toggleTripleClickDisplay;
- (void)_handleAlertActionPress:(id)arg1 controller:(id)arg2;
- (void)_sortVisibleItems;
- (_Bool)shouldOverrideInterfaceOrientation;
- (_Bool)_shouldShowTCOption:(int)arg1;
- (_Bool)isPreferencesFrontmost;
- (_Bool)isBuddyRunning;
- (id)_titleForTripleClickOption:(int)arg1;
- (_Bool)_valueForTripleClickOption:(int)arg1;
- (id)_visibleTripleClickItems;
- (id)runningAppProcessesWithServerInstance:(id)arg1;
- (id)focusedAppProcessWithServerInstance:(id)arg1;
- (id)frontmostAppProcessWithServerInstance:(id)arg1;
- (_Bool)isPurpleBuddyAppFrontmostWithServerInstance:(id)arg1;
- (_Bool)isSettingsAppFrontmostWithServerInstance:(id)arg1;
- (_Bool)isSystemAppFrontmostExcludingSiri:(_Bool)arg1 withServerInstance:(id)arg2;
- (id)runningAppPIDsWithServerInstance:(id)arg1;
- (int)purpleBuddyPIDWithServerInstance:(id)arg1;
- (id)focusedAppPIDWithServerInstance:(id)arg1;
- (_Bool)isSystemAppShowingAnAlertWithServerInstance:(id)arg1;
- (_Bool)accessibilityShowControlCenter:(_Bool)arg1;
- (_Bool)_accessibilityAllowShowNotificationGestureOverride;
- (void)_accessibilitySetAllowShowNotificationGestureOverride:(_Bool)arg1;
- (_Bool)accessibilityShowNotificationCenter:(_Bool)arg1;
- (_Bool)_accessibilityIsUILocked;
- (void)setSiriIsTalking:(_Bool)arg1 withServerInstance:(id)arg2;
- (double)reachabilityOffsetWithServerInstance:(id)arg1;
- (_Bool)hasActiveOrPendingCallOrFaceTimeWithServerInstance:(id)arg1;
- (_Bool)hasActiveOrPendingCallWithServerInstance:(id)arg1;
- (_Bool)hasActiveCallWithServerInstance:(id)arg1;
- (void)serverInstance:(id)arg1 pauseMedia:(_Bool)arg2;
- (void)serverInstance:(id)arg1 showSpeechPlaybackControls:(_Bool)arg2;
- (void)unlockDeviceWithServerInstance:(id)arg1;
- (id)installedAppsWithServerInstance:(id)arg1;
- (id)serverInstance:(id)arg1 appWithIdentifier:(id)arg2;
- (id)serverInstance:(id)arg1 springBoardSystemInfoQuery:(unsigned long long)arg2;
- (_Bool)areSystemGesturesDisabledByAccessibilityWithServerInstance:(id)arg1;
- (_Bool)areSystemGesturesDisabledNativelyWithServerInstance:(id)arg1;
- (_Bool)isSpeakThisTemporarilyDisabledWithServerInstance:(id)arg1;
- (_Bool)isSyncingRestoringResettingOrUpdatingWithServerInstance:(id)arg1;
- (void)dismissAppSwitcherWithServerInstance:(id)arg1;
- (_Bool)isAppSwitcherVisibleWithServerInstance:(id)arg1;
- (_Bool)isGuidedAccessActiveWithServerInstance:(id)arg1;
- (_Bool)isSiriVisibleWithServerInstance:(id)arg1;
- (_Bool)isControlCenterVisibleWithServerInstance:(id)arg1;
- (void)serverInstance:(id)arg1 showControlCenter:(_Bool)arg2;
- (_Bool)serverInstance:(id)arg1 showNotificationCenter:(_Bool)arg2;
- (_Bool)isNotificationCenterVisibleWithServerInstance:(id)arg1;
- (void)toggleNotificationCenterWithServerInstance:(id)arg1;
- (void)openVoiceControlWithServerInstance:(id)arg1;
- (void)dismissSiriWithServerInstance:(id)arg1;
- (void)openSiriWithServerInstance:(id)arg1;
- (void)openAppSwitcherWithServerInstance:(id)arg1;
- (void)resetDimTimerWithServerInstance:(id)arg1;
- (_Bool)isMediaPlayingWithServerInstance:(id)arg1;
- (_Bool)isPasscodeRequiredOnLockWithServerInstance:(id)arg1;
- (_Bool)isMakingEmergencyCallWithServerInstance:(id)arg1;
- (_Bool)isSystemSleepingWithServerInstance:(id)arg1;
- (_Bool)isScreenLockedWithServerInstance:(id)arg1;
- (void)openCommonTasksWithServerInstance:(id)arg1;
- (void)openCustomGestureCreationForSCATWithServerInstance:(id)arg1;
- (void)openCustomGestureCreationForASTWithServerInstance:(id)arg1;
- (void)serverInstance:(id)arg1 setOrientationLocked:(_Bool)arg2;
- (_Bool)isOrientationLockedWithServerInstance:(id)arg1;
- (_Bool)isRingerMutedWithServerInstance:(id)arg1;
- (_Bool)isSideSwitchUsedForOrientationWithServerInstance:(id)arg1;
- (double)volumeLevelWithServerInstance:(id)arg1;
- (_Bool)isVoiceControlRunningWithServerInstance:(id)arg1;
- (void)hideAlertWithServerInstance:(id)arg1;
- (void)serverInstance:(id)arg1 showAlertType:(long long)arg2 withHandler:(CDUnknownBlockType)arg3 withData:(id)arg4;
- (void)_axOptionChanged:(id)arg1;
- (void)_monitorSpeechAssetChanges;
- (void)_checkClientForUpdates:(_Bool)arg1;
- (void)dealloc;
- (id)init;
- (void)_performValidation;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

