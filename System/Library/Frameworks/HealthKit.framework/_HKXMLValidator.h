/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:06 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <HealthKit/HealthKit-Structs.h>
@interface _HKXMLValidator : NSObject {

	xmlSchemaRef _xsdSchema;

}
+(id)validatorWithXSD:(id)arg1 ;
+(id)validatorWithPathToXSD:(id)arg1 ;
-(void)dealloc;
-(id)_initWithSchema:(xmlSchemaRef)arg1 ;
-(BOOL)validateXML:(id)arg1 simpleError:(id*)arg2 detailedErrors:(id*)arg3 ;
@end

