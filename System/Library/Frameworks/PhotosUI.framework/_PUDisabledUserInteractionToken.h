/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:48 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString;

@interface _PUDisabledUserInteractionToken : NSObject {

	NSString* _identifier;
	long long _reason;

}

@property (nonatomic,copy) NSString * identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) long long reason;                 //@synthesize reason=_reason - In the implementation block
-(id)description;
-(long long)reason;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)setReason:(long long)arg1 ;
@end

