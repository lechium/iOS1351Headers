/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:24 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Celestial/Celestial-Structs.h>
#import <Celestial/BWInferenceDataRequirement.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface BWInferenceMediaRequirement : BWInferenceDataRequirement <NSCopying> {

	NSString* _attachedMediaKey;

}

@property (nonatomic,copy,readonly) NSString * attachedMediaKey;              //@synthesize attachedMediaKey=_attachedMediaKey - In the implementation block
-(void)dealloc;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)attachedMediaKey;
-(id)initWithAttachedMediaKey:(id)arg1 ;
-(id)initWithMediaRequirement:(id)arg1 ;
@end

