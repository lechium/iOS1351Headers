/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:41 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <OfficeImport/MFPBrush.h>

@class OITSUColor;

@interface MFPSolidBrush : MFPBrush {

	OITSUColor* mColor;

}
-(id)color;
-(void)setColor:(id)arg1 ;
-(id)initWithColor:(id)arg1 ;
-(void)fillPath:(id)arg1 evenOddRule:(BOOL)arg2 ;
@end
