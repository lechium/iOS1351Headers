/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:34 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/PMEditProviderProtocol.h>

@protocol PMEditProviderDelegate;
@class VEKProduction, NSString;

@interface PMTitleEditorProvider : NSObject <PMEditProviderProtocol> {

	VEKProduction* _production;
	id<PMEditProviderDelegate> _delegate;

}

@property (nonatomic,readonly) NSString * title; 
@property (nonatomic,readonly) NSString * subTitle; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) VEKProduction * production;                              //@synthesize production=_production - In the implementation block
@property (assign,nonatomic,__weak) id<PMEditProviderDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<PMEditProviderDelegate>)delegate;
-(void)setDelegate:(id<PMEditProviderDelegate>)arg1 ;
-(NSString *)title;
-(NSString *)subTitle;
-(void)updateTitle:(id)arg1 ;
-(VEKProduction *)production;
-(void)setProduction:(VEKProduction *)arg1 ;
-(id)initWithProduction:(id)arg1 ;
-(void)updateSubtitle:(id)arg1 ;
-(id)defaultMemoriesTitleHelper;
@end

