/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:46 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/ICProgressViewControllerDelegate.h>

@class NSString, UIViewController, UIWindow, NSProgress, NSDate, ICProgressViewController;

@interface ICLongRunningTaskController : NSObject <ICProgressViewControllerDelegate> {

	BOOL _isCancelled;
	BOOL _shouldShowCancelButton;
	BOOL _shouldShowCircularProgress;
	BOOL _allowSingleUnitProgress;
	BOOL _progressViewControllerDidFinishPresenting;
	BOOL _shouldDismissProgressViewController;
	NSString* _customCancelButtonTitle;
	NSString* _progressFormatString;
	UIViewController* _viewControllerToPresentFrom;
	UIWindow* _window;
	double _intervalBeforeOpeningProgressDialog;
	id _keepAlive;
	/*^block*/id _completionBlock;
	/*^block*/id _updateProgressUIBlock;
	NSProgress* _progress;
	NSDate* _lastAccessibilityAnnouncementDate;
	NSDate* _openProgressDate;
	ICProgressViewController* _progressViewController;

}

@property (nonatomic,retain) UIWindow * window;                                              //@synthesize window=_window - In the implementation block
@property (assign,nonatomic) double intervalBeforeOpeningProgressDialog;                     //@synthesize intervalBeforeOpeningProgressDialog=_intervalBeforeOpeningProgressDialog - In the implementation block
@property (nonatomic,retain) id keepAlive;                                                   //@synthesize keepAlive=_keepAlive - In the implementation block
@property (nonatomic,copy) id completionBlock;                                               //@synthesize completionBlock=_completionBlock - In the implementation block
@property (nonatomic,copy) id updateProgressUIBlock;                                         //@synthesize updateProgressUIBlock=_updateProgressUIBlock - In the implementation block
@property (nonatomic,retain) NSProgress * progress;                                          //@synthesize progress=_progress - In the implementation block
@property (nonatomic,retain) NSDate * lastAccessibilityAnnouncementDate;                     //@synthesize lastAccessibilityAnnouncementDate=_lastAccessibilityAnnouncementDate - In the implementation block
@property (nonatomic,retain) NSDate * openProgressDate;                                      //@synthesize openProgressDate=_openProgressDate - In the implementation block
@property (assign,nonatomic) BOOL isCancelled;                                               //@synthesize isCancelled=_isCancelled - In the implementation block
@property (nonatomic,retain) ICProgressViewController * progressViewController;              //@synthesize progressViewController=_progressViewController - In the implementation block
@property (assign,nonatomic) BOOL progressViewControllerDidFinishPresenting;                 //@synthesize progressViewControllerDidFinishPresenting=_progressViewControllerDidFinishPresenting - In the implementation block
@property (assign,nonatomic) BOOL shouldDismissProgressViewController;                       //@synthesize shouldDismissProgressViewController=_shouldDismissProgressViewController - In the implementation block
@property (assign,nonatomic) BOOL shouldShowCancelButton;                                    //@synthesize shouldShowCancelButton=_shouldShowCancelButton - In the implementation block
@property (nonatomic,retain) NSString * customCancelButtonTitle;                             //@synthesize customCancelButtonTitle=_customCancelButtonTitle - In the implementation block
@property (nonatomic,copy) NSString * progressFormatString;                                  //@synthesize progressFormatString=_progressFormatString - In the implementation block
@property (nonatomic,retain) UIViewController * viewControllerToPresentFrom;                 //@synthesize viewControllerToPresentFrom=_viewControllerToPresentFrom - In the implementation block
@property (assign,nonatomic) BOOL shouldShowCircularProgress;                                //@synthesize shouldShowCircularProgress=_shouldShowCircularProgress - In the implementation block
@property (assign,nonatomic) BOOL allowSingleUnitProgress;                                   //@synthesize allowSingleUnitProgress=_allowSingleUnitProgress - In the implementation block
+(void)setMainWindow:(id)arg1 ;
-(id)init;
-(BOOL)isCancelled;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)completionBlock;
-(void)setCompletionBlock:(id)arg1 ;
-(NSProgress *)progress;
-(void)setProgress:(NSProgress *)arg1 ;
-(UIWindow *)window;
-(void)setWindow:(UIWindow *)arg1 ;
-(void)updateProgress;
-(id)keepAlive;
-(void)setKeepAlive:(id)arg1 ;
-(void)setIsCancelled:(BOOL)arg1 ;
-(UIViewController *)viewControllerToPresentFrom;
-(void)setViewControllerToPresentFrom:(UIViewController *)arg1 ;
-(id)initWithWindow:(id)arg1 intervalBeforeOpeningProgressDialog:(double)arg2 ;
-(void)setProgressFormatString:(NSString *)arg1 ;
-(void)setAllowSingleUnitProgress:(BOOL)arg1 ;
-(void)startTask:(/*^block*/id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)setShouldShowCancelButton:(BOOL)arg1 ;
-(void)setShouldShowCircularProgress:(BOOL)arg1 ;
-(void)setIntervalBeforeOpeningProgressDialog:(double)arg1 ;
-(void)completeTaskIfNecessary;
-(double)intervalBeforeOpeningProgressDialog;
-(BOOL)allowSingleUnitProgress;
-(void)setOpenProgressDate:(NSDate *)arg1 ;
-(void)openProgressDialog;
-(NSDate *)openProgressDate;
-(void)closeProgressDialog;
-(id)updateProgressUIBlock;
-(NSString *)progressFormatString;
-(NSDate *)lastAccessibilityAnnouncementDate;
-(void)setLastAccessibilityAnnouncementDate:(NSDate *)arg1 ;
-(void)setProgressViewController:(ICProgressViewController *)arg1 ;
-(BOOL)shouldShowCircularProgress;
-(ICProgressViewController *)progressViewController;
-(BOOL)shouldShowCancelButton;
-(NSString *)customCancelButtonTitle;
-(void)setUpdateProgressUIBlock:(id)arg1 ;
-(void)setProgressViewControllerDidFinishPresenting:(BOOL)arg1 ;
-(void)setShouldDismissProgressViewController:(BOOL)arg1 ;
-(BOOL)shouldDismissProgressViewController;
-(BOOL)progressViewControllerDidFinishPresenting;
-(void)willDismissProgressViewController:(id)arg1 ;
-(void)setCustomCancelButtonTitle:(NSString *)arg1 ;
@end

