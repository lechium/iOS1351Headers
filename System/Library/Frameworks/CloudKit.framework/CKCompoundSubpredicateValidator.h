/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:23 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CloudKit/CKPredicateValidatorInstance.h>

@protocol CKObjectValidating;
@interface CKCompoundSubpredicateValidator : CKPredicateValidatorInstance {

	id<CKObjectValidating> _validator;

}

@property (nonatomic,retain) id<CKObjectValidating> validator;              //@synthesize validator=_validator - In the implementation block
-(id)CKPropertiesDescription;
-(BOOL)validate:(id)arg1 error:(id*)arg2 ;
-(id)initWithValidator:(id)arg1 ;
-(void)setValidator:(id<CKObjectValidating>)arg1 ;
-(id<CKObjectValidating>)validator;
@end
