/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:02 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/USDKit.framework/USDKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <USDKit/USDKit-Structs.h>
@interface USKObjectPath : NSObject {

	SdfPath _path;

}
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)stringValue;
-(id)initWithString:(id)arg1 ;
-(SdfPath)path;
-(id)initWithToken:(id)arg1 ;
-(id)propertyName;
-(id)pathByAppendingPropertyComponent:(id)arg1 ;
-(id)tokenValue;
-(id)initWithSdfPath:(SdfPath)arg1 ;
-(BOOL)isNodePath;
-(id)nodePath;
-(BOOL)isPropertyPath;
@end

