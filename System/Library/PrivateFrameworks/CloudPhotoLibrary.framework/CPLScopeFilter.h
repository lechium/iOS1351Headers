/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:14 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSSet;

@interface CPLScopeFilter : NSObject {

	NSSet* _includedScopeIdentifiers;
	NSSet* _excludedScopeIdentifiers;

}

@property (nonatomic,readonly) NSSet * includedScopeIdentifiers;              //@synthesize includedScopeIdentifiers=_includedScopeIdentifiers - In the implementation block
@property (nonatomic,readonly) NSSet * excludedScopeIdentifiers;              //@synthesize excludedScopeIdentifiers=_excludedScopeIdentifiers - In the implementation block
-(id)description;
-(id)_setOfScopeIdentifiersFromEnumeration:(id)arg1 ;
-(id)initWithIncludedScopeIdentifiers:(id)arg1 ;
-(id)initWithExcludedScopeIdentifiers:(id)arg1 ;
-(BOOL)filterOnScopeIdentifier:(id)arg1 ;
-(NSSet *)includedScopeIdentifiers;
-(NSSet *)excludedScopeIdentifiers;
@end

