/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:09 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/Cards.framework/Cards
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/CRCommand.h>

@class NSDictionary, NSProgress, NSString;

@interface CRUpdateProgressCommand : NSObject <CRCommand> {

	BOOL _animatesProgress;
	unsigned long long commandDirection;
	NSDictionary* userInfo;
	unsigned long long _event;
	NSProgress* _progress;

}

@property (assign,nonatomic) unsigned long long event;                         //@synthesize event=_event - In the implementation block
@property (nonatomic,retain) NSProgress * progress;                            //@synthesize progress=_progress - In the implementation block
@property (assign,nonatomic) BOOL animatesProgress;                            //@synthesize animatesProgress=_animatesProgress - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSDictionary * userInfo; 
@property (assign,nonatomic) unsigned long long commandDirection; 
-(id)init;
-(NSDictionary *)userInfo;
-(NSProgress *)progress;
-(void)setUserInfo:(NSDictionary *)arg1 ;
-(unsigned long long)event;
-(void)setEvent:(unsigned long long)arg1 ;
-(void)setProgress:(NSProgress *)arg1 ;
-(unsigned long long)commandDirection;
-(void)setCommandDirection:(unsigned long long)arg1 ;
-(void)setAnimatesProgress:(BOOL)arg1 ;
-(BOOL)animatesProgress;
@end
