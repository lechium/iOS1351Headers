/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:33 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ShareSheet/UIActivity.h>

@class UIDocumentInteractionController, NSArray;

@interface PMOpenInIMovieActivity : UIActivity {

	UIDocumentInteractionController* _documentInteractionController;
	NSArray* _activityItems;

}

@property (nonatomic,retain) UIDocumentInteractionController * documentInteractionController;              //@synthesize documentInteractionController=_documentInteractionController - In the implementation block
@property (nonatomic,retain) NSArray * activityItems;                                                      //@synthesize activityItems=_activityItems - In the implementation block
+(long long)activityCategory;
-(id)activityType;
-(id)activityTitle;
-(BOOL)canPerformWithActivityItems:(id)arg1 ;
-(void)prepareWithActivityItems:(id)arg1 ;
-(void)activityDidFinish:(BOOL)arg1 ;
-(id)activityViewController;
-(id)activityImage;
-(void)performActivity;
-(void)setActivityItems:(NSArray *)arg1 ;
-(NSArray *)activityItems;
-(UIDocumentInteractionController *)documentInteractionController;
-(void)setDocumentInteractionController:(UIDocumentInteractionController *)arg1 ;
@end

