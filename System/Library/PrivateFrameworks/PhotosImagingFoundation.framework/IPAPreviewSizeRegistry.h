/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:18:21 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosImagingFoundation.framework/PhotosImagingFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, NSMutableDictionary;

@interface IPAPreviewSizeRegistry : NSObject {

	NSString* _name;
	NSMutableDictionary* _policies;

}
-(id)init;
-(id)description;
-(id)debugDescription;
-(id)initWithName:(id)arg1 ;
-(void)addPolicy:(id)arg1 ;
-(id)policyForStyle:(unsigned long long)arg1 ;
-(id)policyForStyleObject:(id)arg1 ;
@end

