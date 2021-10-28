/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:43 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <QuartzCore/QuartzCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class NSString;

@interface CADisplayPreferences : NSObject <NSCopying, NSMutableCopying> {

	CADisplayPreferencesPriv* _priv;

}

@property (assign,nonatomic) BOOL matchContent; 
@property (nonatomic,copy) NSString * preferredHdrMode; 
@property (nonatomic,readonly) int _preferredHdrType; 
-(id)init;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(BOOL)matchContent;
-(NSString *)preferredHdrMode;
-(int)_preferredHdrType;
-(id)initWithMatchContent:(BOOL)arg1 preferredHdrType:(int)arg2 ;
-(id)initWithPreferences:(id)arg1 ;
-(void)setMatchContent:(BOOL)arg1 ;
-(void)setPreferredHdrMode:(NSString *)arg1 ;
@end
