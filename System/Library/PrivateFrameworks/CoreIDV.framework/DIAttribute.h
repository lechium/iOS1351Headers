/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:13 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/CoreIDV.framework/CoreIDV
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol NSObjectNSCopying;
@class NSString, NSData;

@interface DIAttribute : NSObject <NSSecureCoding> {

	id<NSObject><NSCopying> _currentValue;
	BOOL _optional;
	BOOL _incorrect;
	BOOL _isSensitive;
	BOOL _holdLocally;
	BOOL _notForVerification;
	BOOL _dataNodeProof;
	BOOL _hasLabel;
	id<NSObject><NSCopying> _defaultValue;
	NSString* _identifier;
	unsigned long long _attributeType;
	NSString* _displayFormat;
	NSString* _localizedDisplayName;
	NSString* _localizedPlaceholder;
	NSString* _submissionKey;
	NSString* _reason;
	NSString* _submissionFormat;
	NSString* _group;
	NSString* _dataNodeProofGroup;
	NSData* _submissionValue;
	NSString* _clientValidationRegex;
	NSString* _codeOnError;
	NSString* _serverValidationURL;
	NSString* _supportingData;

}

@property (nonatomic,copy) NSString * identifier;                                                    //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) unsigned long long attributeType;                                       //@synthesize attributeType=_attributeType - In the implementation block
@property (nonatomic,copy) NSString * displayFormat;                                                 //@synthesize displayFormat=_displayFormat - In the implementation block
@property (nonatomic,copy) NSString * localizedDisplayName;                                          //@synthesize localizedDisplayName=_localizedDisplayName - In the implementation block
@property (nonatomic,copy) NSString * localizedPlaceholder;                                          //@synthesize localizedPlaceholder=_localizedPlaceholder - In the implementation block
@property (nonatomic,copy) NSString * submissionKey;                                                 //@synthesize submissionKey=_submissionKey - In the implementation block
@property (nonatomic,copy) NSString * submissionFormat;                                              //@synthesize submissionFormat=_submissionFormat - In the implementation block
@property (assign,nonatomic) BOOL optional;                                                          //@synthesize optional=_optional - In the implementation block
@property (assign,nonatomic) BOOL incorrect;                                                         //@synthesize incorrect=_incorrect - In the implementation block
@property (assign,nonatomic) BOOL isSensitive;                                                       //@synthesize isSensitive=_isSensitive - In the implementation block
@property (assign,nonatomic) BOOL holdLocally;                                                       //@synthesize holdLocally=_holdLocally - In the implementation block
@property (assign,nonatomic) BOOL notForVerification;                                                //@synthesize notForVerification=_notForVerification - In the implementation block
@property (assign,nonatomic) BOOL dataNodeProof;                                                     //@synthesize dataNodeProof=_dataNodeProof - In the implementation block
@property (nonatomic,copy) NSString * group;                                                         //@synthesize group=_group - In the implementation block
@property (nonatomic,copy) NSString * dataNodeProofGroup;                                            //@synthesize dataNodeProofGroup=_dataNodeProofGroup - In the implementation block
@property (nonatomic,copy) NSData * submissionValue;                                                 //@synthesize submissionValue=_submissionValue - In the implementation block
@property (nonatomic,copy) NSString * clientValidationRegex;                                         //@synthesize clientValidationRegex=_clientValidationRegex - In the implementation block
@property (nonatomic,copy) NSString * codeOnError;                                                   //@synthesize codeOnError=_codeOnError - In the implementation block
@property (nonatomic,copy) NSString * serverValidationURL;                                           //@synthesize serverValidationURL=_serverValidationURL - In the implementation block
@property (assign,nonatomic) BOOL hasLabel;                                                          //@synthesize hasLabel=_hasLabel - In the implementation block
@property (nonatomic,copy) NSString * supportingData;                                                //@synthesize supportingData=_supportingData - In the implementation block
@property (nonatomic,copy) id<NSObject><NSCopying> defaultValue;                                     //@synthesize defaultValue=_defaultValue - In the implementation block
@property (nonatomic,readonly) NSString * reason;                                                    //@synthesize reason=_reason - In the implementation block
@property (getter=getCurrentValue,nonatomic,copy) id<NSObject><NSCopying> currentValue;              //@synthesize currentValue=_currentValue - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)reason;
-(NSString *)identifier;
-(void)setGroup:(NSString *)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(BOOL)isSensitive;
-(NSString *)group;
-(unsigned long long)attributeType;
-(id<NSObject><NSCopying>)defaultValue;
-(void)setDefaultValue:(id<NSObject><NSCopying>)arg1 ;
-(void)setCurrentValue:(id<NSObject><NSCopying>)arg1 ;
-(void)setAttributeType:(unsigned long long)arg1 ;
-(void)setOptional:(BOOL)arg1 ;
-(BOOL)hasLabel;
-(void)setHasLabel:(BOOL)arg1 ;
-(NSString *)localizedDisplayName;
-(void)setLocalizedDisplayName:(NSString *)arg1 ;
-(NSString *)localizedPlaceholder;
-(void)setSubmissionKey:(NSString *)arg1 ;
-(void)setLocalizedPlaceholder:(NSString *)arg1 ;
-(NSString *)displayFormat;
-(void)setDisplayFormat:(NSString *)arg1 ;
-(BOOL)optional;
-(id)submissionString;
-(NSString *)submissionKey;
-(void)setSubmissionFormat:(NSString *)arg1 ;
-(NSString *)submissionFormat;
-(NSData *)submissionValue;
-(BOOL)isAttributeTypeText;
-(BOOL)isAttributeTypeDate;
-(BOOL)isAttributeTypePicker;
-(BOOL)isAttributeTypeDocument;
-(BOOL)isAttributeTypeSMSOTP;
-(BOOL)isAttributeTypeCamera;
-(BOOL)isAttributeTypeLabel;
-(BOOL)isAttributeTypeFooter;
-(id)getCurrentValue;
-(BOOL)incorrect;
-(void)setIncorrect:(BOOL)arg1 ;
-(void)setIsSensitive:(BOOL)arg1 ;
-(BOOL)holdLocally;
-(void)setHoldLocally:(BOOL)arg1 ;
-(BOOL)notForVerification;
-(void)setNotForVerification:(BOOL)arg1 ;
-(BOOL)dataNodeProof;
-(void)setDataNodeProof:(BOOL)arg1 ;
-(NSString *)dataNodeProofGroup;
-(void)setDataNodeProofGroup:(NSString *)arg1 ;
-(void)setSubmissionValue:(NSData *)arg1 ;
-(NSString *)clientValidationRegex;
-(void)setClientValidationRegex:(NSString *)arg1 ;
-(NSString *)codeOnError;
-(void)setCodeOnError:(NSString *)arg1 ;
-(NSString *)serverValidationURL;
-(void)setServerValidationURL:(NSString *)arg1 ;
-(NSString *)supportingData;
-(void)setSupportingData:(NSString *)arg1 ;
@end

