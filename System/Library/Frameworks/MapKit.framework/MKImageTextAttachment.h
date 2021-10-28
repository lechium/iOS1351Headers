/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:21 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MapKit/MapKit-Structs.h>
#import <UIFoundation/NSTextAttachment.h>

@interface MKImageTextAttachment : NSTextAttachment {

	double _verticalOffset;

}

@property (assign,nonatomic) double verticalOffset;              //@synthesize verticalOffset=_verticalOffset - In the implementation block
-(CGRect)attachmentBoundsForTextContainer:(id)arg1 proposedLineFragment:(CGRect)arg2 glyphPosition:(CGPoint)arg3 characterIndex:(unsigned long long)arg4 ;
-(void)setVerticalOffset:(double)arg1 ;
-(id)initWithImage:(id)arg1 verticalOffset:(double)arg2 ;
-(double)verticalOffset;
@end
