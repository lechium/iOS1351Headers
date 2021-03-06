/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:06 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <VoiceMemos/VoiceMemos-Structs.h>
@class NSDateFormatter;

@interface RCRecorderStyleProvider : NSObject {

	NSDateFormatter* _dateFormatter;
	long long _currentUserInterfaceStyle;
	long long __horizontalSizeClassFromSplitView;

}

@property (assign,nonatomic) long long _horizontalSizeClassFromSplitView;              //@synthesize _horizontalSizeClassFromSplitView=__horizontalSizeClassFromSplitView - In the implementation block
@property (nonatomic,readonly) NSDateFormatter * dateFormatter;                        //@synthesize dateFormatter=_dateFormatter - In the implementation block
@property (assign) long long currentUserInterfaceStyle;                                //@synthesize currentUserInterfaceStyle=_currentUserInterfaceStyle - In the implementation block
+(id)sharedStyleProvider;
-(NSDateFormatter *)dateFormatter;
-(id)backgroundColor;
-(unsigned long long)supportedInterfaceOrientations;
-(double)primaryColumnWidth;
-(BOOL)clipUnderlapWhileTransitioning;
-(BOOL)_isWatch;
-(BOOL)_isPortrait;
-(BOOL)_isLandscape;
-(id)trashImage;
-(id)mainLabelColor;
-(id)tableViewSeparatorColor;
-(BOOL)_isIpad;
-(double)animationDragCoefficient;
-(id)tableViewBackgroundColor;
-(id)tableViewCellBackgroundColor;
-(BOOL)supportsLockScreen;
-(long long)cellSelectionStyle;
-(long long)currentUserInterfaceStyle;
-(void)setCurrentUserInterfaceStyle:(long long)arg1 ;
-(double)defaultFlushRate;
-(double)waveformWaveWidth;
-(double)waveformHorizontalSpacing;
-(double)overviewWaveformWaveWidth;
-(double)overviewWaveformHorizontalSpacing;
-(double)maximumDecibelDisplayRange;
-(double)waveformWaveVerticalPadding;
-(double)overviewWaveformWaveVerticalPadding;
-(double)compactWaveformWaveVerticalPadding;
-(double)minimumDecibelDisplayRange;
-(id)overviewWaveformHighlightColor;
-(id)overviewWaveformEditModePlaybackColor;
-(id)waveformHighlightColor;
-(id)waveformColor;
-(id)overviewWaveformPlaybackColor;
-(id)waveformPlaybackColor:(BOOL)arg1 ;
-(double)annotationViewHeight;
-(BOOL)shouldShowOverviewWaveform;
-(double)overviewWaveformMinimumDurationToDisplayWhenRecording;
-(double)overviewKnobWidthMultiplier;
-(double)overviewPlayheadWidthMultiplier;
-(double)knobWidthMultiplier;
-(double)playheadWidthMultiplier;
-(double)overviewWaveformCornerRadius;
-(double)selectionOverlayBorderWidth;
-(id)timelinePlaybackBackgroundColor:(BOOL)arg1 ;
-(id)waveformPlaybackBackgroundColor:(BOOL)arg1 ;
-(id)waveformPlaybackHighlightedBackgroundColor:(BOOL)arg1 ;
-(id)waveformCompactBackgroundColor;
-(id)waveformCompactHighlightedBackgroundColor;
-(id)waveformBackgroundColor;
-(id)waveformHighlightedBackgroundColor;
-(void)set_horizontalSizeClassFromSplitView:(long long)arg1 ;
-(long long)_horizontalSizeClassFromSplitView;
-(BOOL)_isVibrantUIOrIOSMac;
-(double)tableViewAnimationDuration;
-(BOOL)_isIOSMac;
-(BOOL)_usesVibrantUI;
-(double)recordingControlHeight;
-(BOOL)presentsTitleAndAdditionalEditingControlsInPlaybackCard;
-(BOOL)isAccessibilityLargerTextSizeEnabled;
-(double)timeLineMajorTickHeight;
-(double)selectionKnobRadius;
-(double)selectionBarWidth;
-(id)_roundedThemePrimaryBackgroundColor;
-(id)recordingCardTopGradientColor;
-(id)recordingCardBottomGradientColor;
-(id)recordingCardTopBorderColor1;
-(id)recordingCardTopBorderColor2;
-(BOOL)hostsTransportAndDoneButtonInBottomSection;
-(id)recordingControlInnerColor;
-(BOOL)showsEmptyLibraryMessageInLibrary;
-(id)playbackViewBackgroundColor:(BOOL)arg1 ;
-(id)recordingCardBottomAccessoryBackgroundColor;
-(id)timeLineTimeColor;
-(id)timelinePlaybackTimeColor:(BOOL)arg1 ;
-(id)recordingCardDefaultBackgroundColor;
-(id)minTrackTintColor:(BOOL)arg1 ;
-(BOOL)_isIpadOrIOSMac;
-(id)timeLineLabelFont;
-(id)progressViewBackgroundColorEditingCard:(BOOL)arg1 ;
-(double)welcomeScreenTitleFontSize;
-(id)accessibilityLargeSizes;
-(double)animationDurationBetweenLibraryAndCard;
-(BOOL)_isIphone;
-(BOOL)_isCompactWidth;
-(id)formattedDateStringFromDate:(id)arg1 ;
-(BOOL)setSplitViewHorizontalSizeClass:(long long)arg1 ;
-(long long)tableViewAnimationCurve;
-(double)tableViewAlphaWhenDisabled;
-(double)recordingViewResizeAnimationDuration;
-(double)recordingControlAnimationDuration;
-(double)recordingControlAlphaWhenPressed;
-(double)recordingControlExtraHitOutset;
-(double)descriptionViewSecondaryLabelAlpha;
-(double)minimumColumnWidth;
-(double)maximumColumnWidth;
-(double)emptyLibraryLabelXInset;
-(double)centerClusterWidthCard;
-(double)centerClusterWidthJumpButton;
-(double)centerClusterWidthLibrary;
-(double)librarySelectedMoreAndTrashButtonPadding;
-(CGSize)centerClusterControlSize;
-(CGSize)centerClusterControlSizeRecentlyDeleted;
-(double)topScreenSpacerHeight;
-(double)recordingControlSectionHeight;
-(double)recordingControlSidePadding;
-(double)doneButtonSidePadding;
-(double)doneEditingButtonSidePadding;
-(double)cancelButtonBottomAlignmentOffset;
-(double)recordingControlHorizontalOffset;
-(double)bottomAccessoryWaveformHeight;
-(double)overviewWaveformHeight;
-(double)bottomAccessoryDescriptionHeight;
-(double)recordingSectionBottomPadding;
-(double)fullScreenDescriptionHeight;
-(double)positionReadoutHeight;
-(double)positionReadoutLabelYOffset;
-(double)editToolbarHeight;
-(double)editToolbarCompactHeight;
-(double)shuttleBarHeight;
-(double)shuttleBarButtonContainerHeightCard;
-(double)shuttleBarButtonContainerHeightLibrary;
-(double)shuttleBarAdditionalSliderSpacingLibrary;
-(double)cornerRadiusForCardView;
-(double)topMarginMinSafeAreaTopInsetForCardView;
-(double)topMarginForCardView;
-(double)cardTransitionToCompactSpringiness;
-(double)actionButtonExtraXAxisActiveWidth;
-(double)borderLayerThickness;
-(double)recordingViewWaveformOverviewSpaceBetweenMainWaveformAndOverview;
-(double)recordingViewWaveformOverviewSpaceBetweenTimelabelAndOverview;
-(double)recordingViewWaveformOverviewSidePadding;
-(double)dimmingAlphaForCardBackground;
-(double)virtualNavBarButtonItemSpacing;
-(double)virtualNavBarWidthInset;
-(double)virtualNavBarButtonExtraSpaceItemSpacing;
-(id)trimDeleteButtonTextColor;
-(id)trimDeleteButtonBackgroundColor;
-(double)trimDeleteButtonDisabledOpacity;
-(double)trimDeleteButtonCornerRadius;
-(double)trimDeleteButtonLeftPadding;
-(double)trimDeleteButtonLeftPaddingDistance;
-(CGSize)trimDeleteButtonLeftSize;
-(CGSize)doneCancelButtonRightSize;
-(id)inOutButtonTextColor;
-(id)inOutButtonBackgroundColor;
-(double)inOutButtonCornerRadius;
-(double)overviewPlayheadHeightInset;
-(double)dragToCompactTransitionEpsilon;
-(double)recentlyDeletedToolbarDivdiderInset;
-(double)recentlyDeletedToolbarDivdiderHeight;
-(double)recordingNameLabelPadding;
-(double)grabberTopPadding;
-(double)grabberWidth;
-(double)grabberHeight;
-(double)jumpBackwardForwardButtonSpacing;
-(id)playbackViewTimeLabelFont;
-(double)playbackViewTimeSectionHeight;
-(double)playbackViewTimeLabelYOffset;
-(double)playbackViewControlSectionHeight;
-(double)playbackViewTopPadding;
-(double)playbackViewWaveformOverviewSidePadding;
-(double)playbackViewVerticalSpacingAboveOverviewWaveform;
-(double)playbackViewVerticalSpacingBelowOverviewWaveform;
-(double)playbackViewShuttleBarWidth;
-(double)playbackViewCornerRadius;
-(UIEdgeInsets)playbackViewEdgeInsets;
-(UIEdgeInsets)playbackViewFullScreenEdgeInsets;
-(double)welcomeScreenContainerWidth;
-(double)welcomeScreenContinueButtonWidth;
-(double)welcomeScreenContinueButtonHeight;
-(double)welcomeScreenContinueButtonFontSize;
-(double)welcomeScreenBulletSpacing;
-(double)welcomeScreenBulletIconHorizontalSpacing;
-(double)welcomeScreenBulletTextHorizontalSpacing;
-(double)welcomeScreenBulletsGroupTopMargin;
-(BOOL)transportButtonsAnimateWithCircle;
-(double)transportButtonAnimationJumpCircleRadius;
-(double)transportButtonAnimationPlayCircleRadius;
-(id)transportButtonAnimationCircleColorDarkBG;
-(id)transportButtonAnimationCircleColorLightBG;
-(double)transportButtonAnimationShrinkFactor;
-(double)transportButtonAnimationDuration;
-(double)recordingControlDiameter;
-(double)recordingControlOuterRingThickness;
-(double)recordingControlOuterRingGap;
-(double)recordingControlInnerSquareWidth;
-(double)recordingControlSquareCornerRadius;
-(double)recordingControlPauseGap;
-(double)recordingControlPauseStrokeCornerRadius;
-(double)recordingControlLozengeFixedWidth;
-(double)libraryCellDescriptionHeight;
-(double)libraryCellShuttleBarHeight;
-(double)libraryCellDescriptionViewShuttleBarPadding;
-(double)libraryCellSliderAndControlsVerticalStackViewSpacing;
-(CGSize)actionMenuImageSize;
-(double)descriptionViewSecondaryLabelsTopMargin;
-(double)descriptionViewTitleToSecondaryPadding;
-(double)descriptionCompactViewTitleToSecondaryPadding;
-(double)descriptionViewCreationDateInfoLabelXOffset;
-(double)descriptionViewCreationDurationInfoLabelXOffset;
-(double)waveformVerticalHeightReduction;
-(double)waveformVerticalOffset;
-(double)waveformViewleftPadding;
-(double)waveformViewRightPadding;
-(double)waveformViewTopPadding;
-(double)waveformViewBottomPadding;
-(double)beginEndLabelsTopPadding;
-(double)timeLineTickWidth;
-(double)timeLineMinorTickHeight;
-(double)editToolbarTitleTopInset;
-(double)editToolbarButtonTopInset;
-(double)editTrimToolbarButtonTopInset;
-(double)selectionKnobRadiusAX;
-(double)selectionBarWidthAX;
-(double)selectionHighlightToKnobInset;
-(double)selectionMiddleTimeBaselineInset;
-(double)selectionTimeBaseLineOffset;
-(double)selectionTimeMinOffset;
-(double)selectionTimeInsetWhenSelected;
-(double)selectionTimeInsetNormal;
-(double)selectionHitTestSlop;
-(double)selectionOverlayAlpha;
-(double)selectionDimOverlayAlpha;
-(double)selectionLightOverlayAlpha;
-(double)compactStylePlayheadMultiplier;
-(double)compactStyleTimeBarDefaultHeight;
-(double)compactStyleTimeBarHeightInset;
-(double)recordingControlLockScreenPadding;
-(double)timeDisplayLabelLockScreenPadding;
-(double)waveformLockScreenBottomPadding;
-(double)waveformLockScreenTopPadding;
-(double)dateDurationLabelLockScreenVerticalPadding;
-(double)dateLabelLockScreenHorizontalPadding;
-(double)durationLabelLockScreenHorizontalPadding;
-(double)titleLabelLockScreenTopPaddingMultiplier;
-(id)libraryPlayImage;
-(id)cardPlayImage;
-(id)libraryPauseImage;
-(id)cardPauseImage;
-(id)libraryGoBackwardImage;
-(id)cardGoBackwardImage;
-(id)libraryGoForwardImage;
-(id)cardGoForwardImage;
-(id)ellipsisImage;
-(id)trimImage;
-(id)mainViewBackgroundColor;
-(id)windowHeaderSpacerViewBackgroundColor:(BOOL)arg1 ;
-(id)transportControlsColorForLibrary;
-(id)secondaryTransportControlsColorForLibrary;
-(id)transportControlsColorForRecordingCard;
-(id)transportControlsColorForPlaybackCard:(BOOL)arg1 ;
-(id)actionControlsColorForPlaybackCard;
-(id)playbackCardTopGradientColor:(BOOL)arg1 ;
-(id)playbackCardBottomGradientColor:(BOOL)arg1 ;
-(id)playbackCardTopBorderColor1:(BOOL)arg1 ;
-(id)playbackCardTopBorderColor2:(BOOL)arg1 ;
-(id)playbackCardTimeLabelFontColor:(BOOL)arg1 ;
-(id)recordingCardTimeLabelFontColor;
-(id)titleEditingInsertionPointColor;
-(id)editingToolbarButtonTextColor;
-(id)editingToolbarButtonDisabledTextColor;
-(id)editingToolbarTitleTextColor;
-(id)cardDimmingViewBackgroundColor;
-(id)tableViewEditButtonDimmedColor;
-(id)watchAppTintColor;
-(id)playbackCardPrimaryLabelFontColor;
-(id)playbackCardSecondaryLabelFontColor;
-(id)recordingControlFontColor;
-(id)recordingControlFontColorResume;
-(id)recordingControlInnerColorResume;
-(id)recordingControlOuterColorResume;
-(id)recordingSectionDoneButtonInnerColor;
-(double)recordingSectionDoneButtonDisabledOpacity;
-(id)recordingSectionCancelButtonInnerColor;
-(id)recordingSectionDoneButtonTextColor;
-(id)recordingViewEffectsActiveBackgroundColor;
-(id)recordingViewEffectsInactiveBackgroundColor;
-(id)footerViewBackgroundColor;
-(id)emptyLibraryMessageTextColor:(BOOL)arg1 ;
-(id)emptyLibraryBackgroundColor:(BOOL)arg1 ;
-(id)tableViewSelectionCellBackgroundColor;
-(id)tableViewCellTextColor;
-(id)tableViewEditButtonTextColor;
-(long long)cellEditingSelectionStyle;
-(id)tableViewToolboxSeparatorColor;
-(id)tableViewDoubleLineSeparatorColor;
-(id)waveformDimmedColor;
-(id)beginEndLabelsColor;
-(id)beginEndLabelsPlaybackColor:(BOOL)arg1 ;
-(id)waveformOverviewBackgroundColor;
-(id)waveformOverviewHighlightedBackgroundColor;
-(id)timeLineBackgroundColor;
-(id)timeLineMajorMarkerColor;
-(id)timeLineMinorMarkerColor;
-(id)timeLineMinorPlaybackMarkerColor:(BOOL)arg1 ;
-(id)timeLineMajorPlaybackMarkerColor:(BOOL)arg1 ;
-(id)playbackPositionBarColor;
-(id)recordPositionBarColor;
-(id)playbackPositionTimeColor;
-(id)selectionOverlayColor;
-(id)selectionOverlayEndpointBarColor;
-(id)selectionOverlayEndpointTimeColor;
-(id)replaceSelectionOverlayColor;
-(id)maxTrackTintColor:(BOOL)arg1 ;
-(id)sliderThumbTintColor:(BOOL)arg1 ;
-(id)recentlyDeleteNonDefaultButtonTextColor;
-(id)recentlyDeleteToolBarDividerColor;
-(id)navBarTintColor;
-(id)trimButtonTintColor;
-(id)descriptionViewScalableTitleFontForTableViewCell;
-(id)descriptionViewScalableTitleFontForCardView;
-(id)descriptionViewScalableSecondaryFont;
-(id)creationDateLabelFont;
-(id)creationDateLabelFontForTableViewCell;
-(id)durationLabelFont;
-(id)recordingControlTextFont;
-(id)editingControlButtonLabelFont;
-(id)editingToolbarSaveButtonLabelFont;
-(id)editingToolbarCancelButtonLabelFont;
-(id)editingToolbarTitleLabelFont;
-(id)emptyLibraryTextScalableSecondaryFont;
-(id)durationLabelFontForCompactRecordingView;
-(id)beginEndLabelsFont;
-(double)progressViewDisplayDismissTime;
-(id)progressViewBackgroundColorTableViewCell:(BOOL)arg1 ;
-(double)editingProgressIndicatorDiameterCell;
-(double)editingProgressIndicatorDiameterPlayback;
-(double)editingProgressOuterRingThicknessCell;
-(double)editingProgressOuterRingThicknessPlayback;
-(double)progressTextFontSize;
-(double)progressTextYSpacing;
-(BOOL)showsProgressInTableViewCell;
-(id)welcomeTitleTextAttributes;
-(id)welcomeBulletTitleTextAttributes;
-(id)welcomeBulletBlurbTextAttributes;
-(BOOL)hasPlaybackCard;
-(BOOL)expandsTableViewRowOnSelection;
-(BOOL)shouldAnimateLibraryToCardTransition;
-(BOOL)supportsRotationButNotOtherResizing;
-(BOOL)inhibitsLandscapeDisplayModeButton;
-(BOOL)supportsCompactRecordingCard;
-(BOOL)presentsTitleAndAdditionalEditingControlsInRecordingCard;
-(BOOL)hostsCancelButtonInBottomSection;
-(BOOL)hostsTrimButtonInToolbar;
-(BOOL)hostsUndoButtonInToolbar;
-(BOOL)supportsMainViewControllerUndo;
-(BOOL)showsGradientsInBottomOfCardView;
-(BOOL)showsBlurThroughEffectInBottomAccessory;
-(BOOL)usesNavBarLargeTitleAndSearchBarHosting;
-(BOOL)usesScreenCaptureAsCardBackground;
-(BOOL)usesExtraWidePrimaryColumnWidth;
-(BOOL)usesSystemToolBarForRecordingLibrary;
-(BOOL)hasTransparentMasterNavBarBackground;
-(BOOL)alwaysHidesDetailNavBar;
-(BOOL)showsVirtualNavBarInPlaybackView;
-(BOOL)allowsScrollingUnderNavBar;
-(BOOL)playbackCardHasInsets;
-(BOOL)supportsLockScreenRotation;
-(BOOL)recordingViewHidesBlurEffectsWhenInactive;
-(BOOL)presentsDeleteConfirmationAsAlert;
-(BOOL)presentsRecoverConfirmationAsAlert;
-(BOOL)useVibrancyStyleInRecordingsTableView;
-(BOOL)useDefaultTableViewSeparators;
-(BOOL)hasTwoLinesInRecentlyDeleted;
-(BOOL)pinsSearchBarInLibrary;
-(BOOL)usesLargeTitles;
-(BOOL)hasBeginAndEndTimeLabelAtOverviewWaveform;
-(BOOL)needsPlaybackSpacerView;
-(BOOL)allowsInteractiveCardSizing;
-(BOOL)toolbarShouldBeTransparent;
-(BOOL)toolbarButtonsShouldHaveNonDefaultColor;
-(BOOL)shouldTintNavBar;
-(BOOL)usesTitleLabelPerfOptimization;
-(BOOL)usesVectorGlyph;
-(BOOL)supportsCursorInteractions;
-(BOOL)needsTouchDownWorkaround;
@end

