/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:56 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/SpeechRecognitionCommandAndControl.framework/SpeechRecognitionCommandAndControl
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SpeechRecognitionCommandAndControl/SpeechRecognitionCommandAndControl-Structs.h>
#import <SpeechRecognitionCommandAndControl/CACSimpleContentViewManager.h>

@protocol CACLabeledGridOverlayManagerDelegate;
@class NSMutableArray, NSArray;

@interface CACLabeledGridOverlayManager : CACSimpleContentViewManager {

	NSMutableArray* _labeledElements;
	long long _currentLevel;
	CGRect _currentGridPortraitUpFrame;
	BOOL _needsToBeRedrawn;
	id<CACLabeledGridOverlayManagerDelegate> _delegate;
	long long _currentNumberOfColumns;
	long long _currentNumberOfRows;

}

@property (assign) long long currentLevel;                                                          //@synthesize currentLevel=_currentLevel - In the implementation block
@property (retain) NSArray * labeledElements;                                                       //@synthesize labeledElements=_labeledElements - In the implementation block
@property (assign,nonatomic,__weak) id<CACLabeledGridOverlayManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL needsToBeRedrawn;                                                 //@synthesize needsToBeRedrawn=_needsToBeRedrawn - In the implementation block
@property (assign) long long currentNumberOfColumns;                                                //@synthesize currentNumberOfColumns=_currentNumberOfColumns - In the implementation block
@property (assign) long long currentNumberOfRows;                                                   //@synthesize currentNumberOfRows=_currentNumberOfRows - In the implementation block
@property (nonatomic,readonly) CGPoint portraitUpCenterPoint; 
+(unsigned long long)maxNumberOfRowsForDevice;
+(unsigned long long)maxNumberOfColumnsForDevice;
-(id<CACLabeledGridOverlayManagerDelegate>)delegate;
-(void)setDelegate:(id<CACLabeledGridOverlayManagerDelegate>)arg1 ;
-(void)resetIdleTimer;
-(BOOL)isOverlay;
-(void)showOverlay;
-(void)hideAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)setCurrentNumberOfColumns:(long long)arg1 ;
-(long long)currentNumberOfColumns;
-(void)setCurrentLevel:(long long)arg1 ;
-(long long)currentLevel;
-(void)resetAndDrawAtTopLevel;
-(BOOL)updateOverlayWithPortraitUpRect:(CGRect)arg1 ;
-(void)startDelayedDimmingOfNumbers;
-(BOOL)_isNextLevelAvailable;
-(void)setNeedsToBeRedrawn:(BOOL)arg1 ;
-(void)stopDelayedDimmingOfNumbers;
-(CGRect)bestDrilledGridRectForPortraitUpRect:(CGRect)arg1 ;
-(void)_generateLabeledElementsForPortraitUpRect:(CGRect)arg1 ;
-(NSArray *)labeledElements;
-(void)setLabeledElements:(NSArray *)arg1 ;
-(long long)currentNumberOfRows;
-(CGSize)bestGridResolutionForPortraitUpRect:(CGRect)arg1 ;
-(CGPoint)portraitUpCenterPoint;
-(BOOL)shouldZoom;
-(BOOL)needsToBeRedrawn;
-(void)setCurrentNumberOfRows:(long long)arg1 ;
@end

