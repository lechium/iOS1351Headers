/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:18:03 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/CRKRequestToOperationClassMapping.h>

@class NSArray, NSString;

@interface CRKClassNameSubstitutionRequestToOperationClassMapper : NSObject <CRKRequestToOperationClassMapping> {

	NSArray* mAllowedPrefixes;
	NSString* mOperationPrefix;

}
-(id)init;
-(id)initWithAllowedRequestPrefixes:(id)arg1 operationPrefix:(id)arg2 ;
-(id)stringByApplyingOperationSuffixToString:(id)arg1 ;
-(id)stringByApplyingOperationPrefixToString:(id)arg1 ;
-(id)prefixForString:(id)arg1 ;
-(Class)operationClassForRequest:(id)arg1 ;
@end
