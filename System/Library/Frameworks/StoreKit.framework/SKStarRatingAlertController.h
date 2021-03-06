/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:30 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/StoreKit.framework/StoreKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIAlertController.h>

@class SKStarRatingControl, UIAlertAction;

@interface SKStarRatingAlertController : UIAlertController {

	SKStarRatingControl* _ratingControl;
	UIAlertAction* _submitAction;
	/*^block*/id _completion;

}

@property (assign,nonatomic) float rating; 
@property (nonatomic,copy) id completion;               //@synthesize completion=_completion - In the implementation block
+(id)starRatingAlertController;
-(void)dealloc;
-(void)setCompletion:(id)arg1 ;
-(id)completion;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(float)rating;
-(void)setRating:(float)arg1 ;
-(void)_ratingControlChanged:(id)arg1 ;
-(void)setupActionsWithBundle:(id)arg1 ;
-(void)_updateButtonState;
@end

