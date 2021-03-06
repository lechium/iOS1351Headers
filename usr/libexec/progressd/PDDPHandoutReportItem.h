//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import "NSCopying-Protocol.h"

@class NSMutableArray, NSString, PDDPActivityReport, PDDPDate;

@interface PDDPHandoutReportItem : PBCodable <NSCopying>
{
    NSMutableArray *_additionalReports;	// 8 = 0x8
    NSString *_attachmentId;	// 16 = 0x10
    NSString *_classId;	// 24 = 0x18
    PDDPDate *_endDate;	// 32 = 0x20
    int _granularity;	// 40 = 0x28
    NSString *_handoutId;	// 48 = 0x30
    PDDPActivityReport *_report;	// 56 = 0x38
    NSString *_reportItemId;	// 64 = 0x40
    PDDPDate *_startDate;	// 72 = 0x48
    NSString *_studentId;	// 80 = 0x50
    int _type;	// 88 = 0x58
    _Bool _isCompleted;	// 92 = 0x5c
    struct {
        unsigned int granularity:1;
        unsigned int type:1;
        unsigned int isCompleted:1;
    } _has;	// 96 = 0x60
}

+ (Class)additionalReportsType;	// IMP=0x00000001001360bc
- (void).cxx_destruct;	// IMP=0x0000000100137c58
@property(retain, nonatomic) NSString *reportItemId; // @synthesize reportItemId=_reportItemId;
@property(retain, nonatomic) NSMutableArray *additionalReports; // @synthesize additionalReports=_additionalReports;
@property(retain, nonatomic) PDDPActivityReport *report; // @synthesize report=_report;
@property(nonatomic) _Bool isCompleted; // @synthesize isCompleted=_isCompleted;
@property(retain, nonatomic) NSString *attachmentId; // @synthesize attachmentId=_attachmentId;
@property(retain, nonatomic) PDDPDate *endDate; // @synthesize endDate=_endDate;
@property(retain, nonatomic) PDDPDate *startDate; // @synthesize startDate=_startDate;
@property(retain, nonatomic) NSString *classId; // @synthesize classId=_classId;
@property(retain, nonatomic) NSString *studentId; // @synthesize studentId=_studentId;
@property(retain, nonatomic) NSString *handoutId; // @synthesize handoutId=_handoutId;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000100137814
- (unsigned long long)hash;	// IMP=0x00000001001376a8
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000100137408
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000001001370e4
- (void)copyTo:(id)arg1;	// IMP=0x0000000100136e9c
- (void)writeTo:(id)arg1;	// IMP=0x0000000100136c28
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000100136c20
- (id)dictionaryRepresentation;	// IMP=0x0000000100136194
- (id)description;	// IMP=0x00000001001360e0
@property(readonly, nonatomic) _Bool hasReportItemId;
- (id)additionalReportsAtIndex:(unsigned long long)arg1;	// IMP=0x00000001001360a4
- (unsigned long long)additionalReportsCount;	// IMP=0x000000010013608c
- (void)addAdditionalReports:(id)arg1;	// IMP=0x0000000100136018
- (void)clearAdditionalReports;	// IMP=0x0000000100136000
@property(readonly, nonatomic) _Bool hasReport;
@property(nonatomic) _Bool hasIsCompleted;
@property(readonly, nonatomic) _Bool hasAttachmentId;
@property(readonly, nonatomic) _Bool hasEndDate;
@property(readonly, nonatomic) _Bool hasStartDate;
@property(readonly, nonatomic) _Bool hasClassId;
@property(readonly, nonatomic) _Bool hasStudentId;
@property(readonly, nonatomic) _Bool hasHandoutId;
- (int)StringAsGranularity:(id)arg1;	// IMP=0x0000000100135e24
- (id)granularityAsString:(int)arg1;	// IMP=0x0000000100135d88
@property(nonatomic) _Bool hasGranularity;
@property(nonatomic) int granularity; // @synthesize granularity=_granularity;
- (int)StringAsType:(id)arg1;	// IMP=0x0000000100135c2c
- (id)typeAsString:(int)arg1;	// IMP=0x0000000100135b90
@property(nonatomic) _Bool hasType;
@property(nonatomic) int type; // @synthesize type=_type;

@end

