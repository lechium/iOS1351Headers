/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:43 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <OfficeImport/WDRun.h>

@class WDText, WDCharacterRun;

@interface WDNote : WDRun {

	WDText* mText;
	WDCharacterRun* mReference;
	BOOL mAutomaticNumbering;

}
-(id)description;
-(id)text;
-(id)reference;
-(int)runType;
-(void)setAutomaticNumbering:(BOOL)arg1 ;
-(BOOL)automaticNumbering;
-(id)initWithParagraph:(id)arg1 footnote:(BOOL)arg2 ;
@end
