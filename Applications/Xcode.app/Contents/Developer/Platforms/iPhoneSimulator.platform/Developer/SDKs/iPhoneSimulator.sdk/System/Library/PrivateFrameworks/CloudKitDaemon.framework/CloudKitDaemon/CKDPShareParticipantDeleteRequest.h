//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBRequest.h"

#import "NSCopying.h"

@class CKDPIdentifier, CKDPShareIdentifier;

__attribute__((visibility("hidden")))
@interface CKDPShareParticipantDeleteRequest : PBRequest <NSCopying>
{
    CKDPIdentifier *_participantId;
    CKDPShareIdentifier *_shareId;
}

+ (id)options;
@property(retain, nonatomic) CKDPIdentifier *participantId; // @synthesize participantId=_participantId;
@property(retain, nonatomic) CKDPShareIdentifier *shareId; // @synthesize shareId=_shareId;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (Class)responseClass;
- (unsigned int)requestTypeCode;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasParticipantId;
@property(readonly, nonatomic) _Bool hasShareId;

@end
