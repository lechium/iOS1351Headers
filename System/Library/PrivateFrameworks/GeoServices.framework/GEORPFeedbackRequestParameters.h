/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:30 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, GEORPFeedbackIdLookupParameters, GEORPFeedbackImageUploadParameters, GEORPFeedbackLayoutConfigParameters, GEORPFeedbackQueryParameters, GEORPFeedbackSubmissionParameters;

@interface GEORPFeedbackRequestParameters : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	GEORPFeedbackIdLookupParameters* _idLookupParameters;
	GEORPFeedbackImageUploadParameters* _imageUploadParameters;
	GEORPFeedbackLayoutConfigParameters* _layoutConfigParameters;
	GEORPFeedbackQueryParameters* _queryParameters;
	GEORPFeedbackSubmissionParameters* _submissionParameters;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned read_unknownFields : 1;
		unsigned read_idLookupParameters : 1;
		unsigned read_imageUploadParameters : 1;
		unsigned read_layoutConfigParameters : 1;
		unsigned read_queryParameters : 1;
		unsigned read_submissionParameters : 1;
		unsigned wrote_unknownFields : 1;
		unsigned wrote_idLookupParameters : 1;
		unsigned wrote_imageUploadParameters : 1;
		unsigned wrote_layoutConfigParameters : 1;
		unsigned wrote_queryParameters : 1;
		unsigned wrote_submissionParameters : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasSubmissionParameters; 
@property (nonatomic,retain) GEORPFeedbackSubmissionParameters * submissionParameters; 
@property (nonatomic,readonly) BOOL hasIdLookupParameters; 
@property (nonatomic,retain) GEORPFeedbackIdLookupParameters * idLookupParameters; 
@property (nonatomic,readonly) BOOL hasQueryParameters; 
@property (nonatomic,retain) GEORPFeedbackQueryParameters * queryParameters; 
@property (nonatomic,readonly) BOOL hasImageUploadParameters; 
@property (nonatomic,retain) GEORPFeedbackImageUploadParameters * imageUploadParameters; 
@property (nonatomic,readonly) BOOL hasLayoutConfigParameters; 
@property (nonatomic,retain) GEORPFeedbackLayoutConfigParameters * layoutConfigParameters; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(BOOL)hasLayoutConfigParameters;
-(GEORPFeedbackLayoutConfigParameters *)layoutConfigParameters;
-(BOOL)hasSubmissionParameters;
-(void)_readSubmissionParameters;
-(void)_readIdLookupParameters;
-(void)_readQueryParameters;
-(void)_readImageUploadParameters;
-(void)_readLayoutConfigParameters;
-(GEORPFeedbackSubmissionParameters *)submissionParameters;
-(GEORPFeedbackIdLookupParameters *)idLookupParameters;
-(GEORPFeedbackQueryParameters *)queryParameters;
-(GEORPFeedbackImageUploadParameters *)imageUploadParameters;
-(void)setSubmissionParameters:(GEORPFeedbackSubmissionParameters *)arg1 ;
-(void)setIdLookupParameters:(GEORPFeedbackIdLookupParameters *)arg1 ;
-(void)setQueryParameters:(GEORPFeedbackQueryParameters *)arg1 ;
-(void)setImageUploadParameters:(GEORPFeedbackImageUploadParameters *)arg1 ;
-(void)setLayoutConfigParameters:(GEORPFeedbackLayoutConfigParameters *)arg1 ;
-(BOOL)hasIdLookupParameters;
-(BOOL)hasQueryParameters;
-(BOOL)hasImageUploadParameters;
-(id)initWithMerchantIndustryCode:(long long)arg1 mapsIdentifier:(unsigned long long)arg2 merchantName:(id)arg3 merchantRawName:(id)arg4 merchantIndustryCategory:(id)arg5 merchantURL:(id)arg6 merchantFormattedAddress:(id)arg7 transactionTime:(double)arg8 transactionType:(id)arg9 transactionLocation:(SCD_Struct_GE32)arg10 ;
@end

