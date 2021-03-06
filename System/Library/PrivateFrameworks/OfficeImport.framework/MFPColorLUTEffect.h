/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:41 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <OfficeImport/MFPEffect.h>

@interface MFPColorLUTEffect : MFPEffect {

	unsigned char mLutA[256];
	unsigned char mLutR[256];
	unsigned char mLutG[256];
	unsigned char mLutB[256];

}
+(id)GUID;
-(id)initWithLUTA:(unsigned char)arg1 LUTR:(unsigned char)arg2 LUTG:(unsigned char)arg3 LUTB:(unsigned char)arg4 ;
@end

