/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:58 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PencilKit/PencilKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface PKLinedPaper : NSObject <NSCopying> {

	double _horizontalInset;
	CGPoint _lineSpacing;

}

@property (nonatomic,readonly) CGPoint lineSpacing;                 //@synthesize lineSpacing=_lineSpacing - In the implementation block
@property (nonatomic,readonly) double horizontalInset;              //@synthesize horizontalInset=_horizontalInset - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(CGPoint)lineSpacing;
-(double)horizontalInset;
-(id)initWithLineSpacing:(CGPoint)arg1 horizontalInset:(double)arg2 ;
@end

