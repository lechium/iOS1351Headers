/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:42 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <OfficeImport/EDSortedCollection.h>

@class EDResources, EDWorksheet;

@interface EDColumnInfoCollection : EDSortedCollection {

	EDResources* mResources;
	EDWorksheet* mWorksheet;

}
-(id)columnInfoForColumnNumber:(int)arg1 ;
-(id)initWithResources:(id)arg1 worksheet:(id)arg2 ;
-(id)columnInfoCreateIfNilForColumnNumber:(int)arg1 ;
@end
