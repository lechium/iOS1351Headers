/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:42 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <OfficeImport/OfficeImport-Structs.h>
@interface EXAlignmentInfo : NSObject
+(int)edHorizontalAlignFromHorizontalAlignString:(id)arg1 ;
+(int)edVerticalAlignFromVerticalAlignString:(id)arg1 ;
+(id)horizontalAlignmentEnumMap;
+(id)verticalAlignmentEnumMap;
+(id)edAlignmentInfoFromXmlAlignmentInfoElement:(xmlNode*)arg1 state:(id)arg2 ;
+(id)edAlignmentInfoFromVmlAlignmentInfoElement:(xmlNode*)arg1 state:(id)arg2 ;
@end

