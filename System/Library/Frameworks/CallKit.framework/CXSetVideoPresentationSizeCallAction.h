/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:25 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/CallKit.framework/CallKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CallKit/CallKit-Structs.h>
#import <CallKit/CXCallAction.h>

@interface CXSetVideoPresentationSizeCallAction : CXCallAction {

	CGSize _videoPresentationSize;

}

@property (assign,nonatomic) CGSize videoPresentationSize;              //@synthesize videoPresentationSize=_videoPresentationSize - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)customDescription;
-(void)updateCopy:(id)arg1 withZone:(NSZone*)arg2 ;
-(id)sanitizedCopyWithZone:(NSZone*)arg1 ;
-(CGSize)videoPresentationSize;
-(void)setVideoPresentationSize:(CGSize)arg1 ;
-(id)initWithCallUUID:(id)arg1 videoPresentationSize:(CGSize)arg2 ;
@end
