/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:18:03 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ClassroomKit/ClassroomKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol CRKASMLocation;
@class CRKASMCourseUpdateProperties;

@interface CRKASMCourseCreateProperties : NSObject <NSCopying> {

	id<CRKASMLocation> _location;
	CRKASMCourseUpdateProperties* _updateProperties;

}

@property (nonatomic,retain) id<CRKASMLocation> location;                                //@synthesize location=_location - In the implementation block
@property (nonatomic,copy) CRKASMCourseUpdateProperties * updateProperties;              //@synthesize updateProperties=_updateProperties - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(id<CRKASMLocation>)location;
-(void)setLocation:(id<CRKASMLocation>)arg1 ;
-(CRKASMCourseUpdateProperties *)updateProperties;
-(void)setUpdateProperties:(CRKASMCourseUpdateProperties *)arg1 ;
@end
