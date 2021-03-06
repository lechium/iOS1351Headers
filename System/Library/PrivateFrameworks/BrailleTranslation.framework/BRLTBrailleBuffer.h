/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:18:37 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/BrailleTranslation.framework/BrailleTranslation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <BrailleTranslation/BrailleTranslation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class BRLTBrailleString;

@interface BRLTBrailleBuffer : NSObject <NSCopying> {

	BRLTBrailleString* _brailleString;
	unsigned long long _cursor;

}

@property (nonatomic,readonly) BRLTBrailleString * brailleString; 
@property (assign,nonatomic) unsigned long long cursor;                        //@synthesize cursor=_cursor - In the implementation block
-(id)init;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)cursor;
-(void)setCursor:(unsigned long long)arg1 ;
-(id)initWithBrailleString:(id)arg1 ;
-(void)insertBrailleChar:(id)arg1 ;
-(void)deleteBrailleChar;
-(BRLTBrailleString *)brailleString;
@end

