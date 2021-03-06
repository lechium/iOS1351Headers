/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:43 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <OfficeImport/OfficeImport-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class OITSUColor;

@interface WDShading : NSObject <NSCopying> {

	int mStyle;
	OITSUColor* mForegroundColor;
	OITSUColor* mBackgroundColor;

}
+(id)autoForegroundColor;
+(id)autoBackgroundColor;
+(id)nilShading;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)style;
-(void)setStyle:(int)arg1 ;
-(id)background;
-(void)setBackground:(id)arg1 ;
-(void)setForeground:(id)arg1 ;
-(id)foreground;
-(void)setShading:(id)arg1 ;
-(BOOL)isEqualToShading:(id)arg1 ;
@end

