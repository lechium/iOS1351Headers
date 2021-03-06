/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:59 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MessageUI/MessageUI-Structs.h>
#import <libobjc.A.dylib/NSItemProviderReading.h>
#import <libobjc.A.dylib/NSItemProviderWriting.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, NSString, CNAutocompleteResult, CNContact, MFComposeRecipientOriginContext;

@interface MFComposeRecipient : NSObject <NSItemProviderReading, NSItemProviderWriting, NSCopying, NSSecureCoding> {

	void* _record;
	int _recordID;
	int _property;
	int _identifier;
	NSString* _address;
	NSString* _label;
	NSString* _countryCode;
	NSString* _displayString;
	unsigned long long _sourceType;
	NSArray* _cachedCompleteMatches;
	NSArray* _cachedMatchedStrings;
	NSArray* _cachedSortedMembers;
	CNAutocompleteResult* _autocompleteResult;
	CNContact* _contact;
	NSString* _contactIdentifier;
	NSString* _valueIdentifier;
	NSString* _compositeName;
	NSString* _unlocalizedLabel;
	MFComposeRecipientOriginContext* _originContext;
	unsigned long long _kind;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSArray * writableTypeIdentifiersForItemProvider; 
@property (nonatomic,retain) NSString * countryCode;                                                             //@synthesize countryCode=_countryCode - In the implementation block
@property (nonatomic,copy) NSString * contactIdentifier;                                                         //@synthesize contactIdentifier=_contactIdentifier - In the implementation block
@property (nonatomic,copy) NSString * displayString;                                                             //@synthesize displayString=_displayString - In the implementation block
@property (nonatomic,copy) NSString * valueIdentifier;                                                           //@synthesize valueIdentifier=_valueIdentifier - In the implementation block
@property (nonatomic,copy) NSString * label;                                                                     //@synthesize label=_label - In the implementation block
@property (nonatomic,copy) NSString * unlocalizedLabel;                                                          //@synthesize unlocalizedLabel=_unlocalizedLabel - In the implementation block
@property (assign,nonatomic) unsigned long long sourceType;                                                      //@synthesize sourceType=_sourceType - In the implementation block
@property (nonatomic,retain) CNAutocompleteResult * autocompleteResult;                                          //@synthesize autocompleteResult=_autocompleteResult - In the implementation block
@property (nonatomic,retain) MFComposeRecipientOriginContext * originContext;                                    //@synthesize originContext=_originContext - In the implementation block
@property (getter=isRemovableFromSearchResults,nonatomic,readonly) BOOL removableFromSearchResults; 
@property (nonatomic,readonly) BOOL showsAccessoryButton; 
@property (nonatomic,readonly) BOOL isGroup; 
@property (nonatomic,retain) CNContact * contact;                                                                //@synthesize contact=_contact - In the implementation block
@property (nonatomic,readonly) BOOL isSuggestedRecipient; 
@property (nonatomic,readonly) BOOL isDirectoryServerResult; 
@property (nonatomic,copy) NSString * address; 
@property (nonatomic,readonly) NSString * normalizedAddress; 
@property (nonatomic,readonly) NSString * commentedAddress; 
@property (nonatomic,readonly) NSString * uncommentedAddress; 
@property (nonatomic,readonly) unsigned long long kind;                                                          //@synthesize kind=_kind - In the implementation block
@property (nonatomic,readonly) NSString * placeholderName; 
@property (nonatomic,readonly) NSString * compositeName; 
@property (nonatomic,readonly) NSString * shortName; 
+(BOOL)supportsSecureCoding;
+(id)objectWithItemProviderData:(id)arg1 typeIdentifier:(id)arg2 error:(id*)arg3 ;
+(id)writableTypeIdentifiersForItemProvider;
+(id)readableTypeIdentifiersForItemProvider;
+(id)recipientWithRecord:(void*)arg1 property:(int)arg2 identifier:(int)arg3 ;
+(id)mf_recipientWithGALResult:(id)arg1 ;
+(id)recipientWithProperty:(int)arg1 address:(id)arg2 ;
+(id)_requiredKeyDescriptors;
+(id)composeRecipientWithAutocompleteResult:(id)arg1 ;
+(id)recipientWithRecord:(void*)arg1 recordID:(int)arg2 property:(int)arg3 identifier:(int)arg4 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)countryCode;
-(int)identifier;
-(void)setIdentifier:(int)arg1 ;
-(NSString *)address;
-(id)loadDataWithTypeIdentifier:(id)arg1 forItemProviderCompletionHandler:(/*^block*/id)arg2 ;
-(unsigned long long)kind;
-(void)setLabel:(NSString *)arg1 ;
-(NSString *)label;
-(CNContact *)contact;
-(void)setContact:(CNContact *)arg1 ;
-(int)recordID;
-(NSString *)contactIdentifier;
-(id)children;
-(BOOL)isGroup;
-(unsigned long long)sourceType;
-(void)setSourceType:(unsigned long long)arg1 ;
-(NSString *)displayString;
-(void)setDisplayString:(NSString *)arg1 ;
-(void)setCountryCode:(NSString *)arg1 ;
-(void)setAddress:(NSString *)arg1 ;
-(int)property;
-(void*)record;
-(CNAutocompleteResult *)autocompleteResult;
-(void)setAutocompleteResult:(CNAutocompleteResult *)arg1 ;
-(NSString *)shortName;
-(void)setContactIdentifier:(NSString *)arg1 ;
-(id)labeledValueIdentifier;
-(NSString *)uncommentedAddress;
-(NSString *)normalizedAddress;
-(id)initWithContact:(id)arg1 address:(id)arg2 kind:(unsigned long long)arg3 ;
-(NSString *)compositeName;
-(NSString *)commentedAddress;
-(BOOL)isRemovableFromSearchResults;
-(NSString *)unlocalizedLabel;
-(void)setOriginContext:(MFComposeRecipientOriginContext *)arg1 ;
-(id)initWithRecord:(void*)arg1 recordID:(int)arg2 property:(int)arg3 identifier:(int)arg4 address:(id)arg5 ;
-(BOOL)isSuggestedRecipient;
-(BOOL)isDirectoryServerResult;
-(BOOL)showsAccessoryButton;
-(void)setValueIdentifier:(NSString *)arg1 ;
-(void)setUnlocalizedLabel:(NSString *)arg1 ;
-(NSString *)placeholderName;
-(id)_unformattedAddress;
-(void)setRecord:(void*)arg1 recordID:(int)arg2 identifier:(int)arg3 ;
-(id)sortedChildren;
-(id)childrenWithCompleteMatches;
-(BOOL)wasCompleteMatch;
-(id)completelyMatchedAttributedStrings;
-(id)preferredSendingAddress;
-(MFComposeRecipientOriginContext *)originContext;
-(NSString *)valueIdentifier;
@end

