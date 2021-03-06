/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:05 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/Photos.framework/Photos
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Photos/PHObjectReference.h>

@class NSString;

@interface PHCollectionReference : PHObjectReference {

	NSString* _transientIdentifier;
	NSString* _transientTitle;

}

@property (nonatomic,readonly) BOOL transient; 
@property (nonatomic,copy,readonly) NSString * transientIdentifier;              //@synthesize transientIdentifier=_transientIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * transientTitle;                   //@synthesize transientTitle=_transientTitle - In the implementation block
+(id)representedType;
-(NSString *)transientIdentifier;
-(id)initWithDictionary:(id)arg1 referenceType:(id)arg2 ;
-(id)dictionaryForReferenceType:(id)arg1 ;
-(id)initWithLocalIdentifier:(id)arg1 libraryURL:(id)arg2 transientIdentifier:(id)arg3 transientTitle:(id)arg4 ;
-(BOOL)transient;
-(id)_transientCollectionInLibrary:(id)arg1 ;
-(NSString *)transientTitle;
@end

