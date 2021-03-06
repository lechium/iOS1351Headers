/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:35 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/ARKit.framework/ARKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ARKit/ARKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray;

@interface ARLineCloud : NSObject <NSCopying> {

	NSArray* _lines;

}

@property (nonatomic,readonly) NSArray * lines;              //@synthesize lines=_lines - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSArray *)lines;
-(id)initWithLineCloudData:(id)arg1 ;
@end

