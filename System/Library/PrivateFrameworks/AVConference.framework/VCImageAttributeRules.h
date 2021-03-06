/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:59 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableDictionary;

@interface VCImageAttributeRules : NSObject {

	NSMutableDictionary* _imageAttributeRules;

}

@property (nonatomic,retain) NSMutableDictionary * imageAttributeRules;              //@synthesize imageAttributeRules=_imageAttributeRules - In the implementation block
-(id)init;
-(void)dealloc;
-(id)description;
-(NSMutableDictionary *)imageAttributeRules;
-(id)extractDimensionsForInterface:(int)arg1 direction:(int)arg2 ;
-(void)setImageAttributeRules:(NSMutableDictionary *)arg1 ;
-(void)swapSendAndReceiveRules;
-(void)addRuleForVideoPayload:(int)arg1 withDirection:(int)arg2 width:(int)arg3 height:(int)arg4 frameRate:(int)arg5 priority:(int)arg6 interface:(int)arg7 ;
-(void)interfaceKey:(id*)arg1 forInterface:(int)arg2 directionKey:(id*)arg3 forDirection:(int)arg4 ;
@end

