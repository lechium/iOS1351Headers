/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:42 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class EDResources;

@interface CHDLegendEntry : NSObject {

	unsigned long long mFontIndex;
	unsigned mEntryIndex;
	EDResources* mResources;

}
-(id)description;
-(void)setFont:(id)arg1 ;
-(id)font;
-(unsigned)entryIndex;
-(void)setEntryIndex:(unsigned)arg1 ;
-(unsigned long long)fontIndex;
-(id)initWithResources:(id)arg1 ;
-(void)setFontIndex:(unsigned long long)arg1 ;
@end

