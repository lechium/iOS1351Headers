/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:07 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WebInspector/RWIProtocolJSONObject.h>

@class RWIProtocolPageFrame, NSArray;

@interface RWIProtocolPageFrameResourceTree : RWIProtocolJSONObject

@property (nonatomic,retain) RWIProtocolPageFrame * frame; 
@property (nonatomic,copy) NSArray * resources; 
@property (nonatomic,copy) NSArray * childFrames; 
+(id)safe_initWithFrame:(id)arg1 resources:(id)arg2 ;
-(RWIProtocolPageFrame *)frame;
-(void)setFrame:(RWIProtocolPageFrame *)arg1 ;
-(NSArray *)childFrames;
-(NSArray *)resources;
-(void)setResources:(NSArray *)arg1 ;
-(void)setChildFrames:(NSArray *)arg1 ;
-(id)initWithFrame:(id)arg1 resources:(id)arg2 ;
@end
