//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBRequest.h"

@class NSMutableArray, NSString;

@interface ALSLocationRequest : PBRequest
{
    NSString *_appBundleId;
    NSMutableArray *_cdmaCellTowers;
    NSMutableArray *_cdmaEvdoTowers;
    NSMutableArray *_cellTowers;
    NSMutableArray *_lteCellTowers;
    int _numberOfSurroundingCdmaCells;
    int _numberOfSurroundingCdmaEvdoCells;
    int _numberOfSurroundingCells;
    int _numberOfSurroundingLteCells;
    int _numberOfSurroundingScdmaCells;
    int _numberOfSurroundingWifis;
    NSMutableArray *_scdmaCellTowers;
    NSMutableArray *_wirelessAPs;
    struct {
        unsigned int numberOfSurroundingCdmaCells:1;
        unsigned int numberOfSurroundingCdmaEvdoCells:1;
        unsigned int numberOfSurroundingCells:1;
        unsigned int numberOfSurroundingLteCells:1;
        unsigned int numberOfSurroundingScdmaCells:1;
        unsigned int numberOfSurroundingWifis:1;
    } _has;
}

@property(nonatomic) int numberOfSurroundingScdmaCells; // @synthesize numberOfSurroundingScdmaCells=_numberOfSurroundingScdmaCells;
@property(retain, nonatomic) NSMutableArray *scdmaCellTowers; // @synthesize scdmaCellTowers=_scdmaCellTowers;
@property(nonatomic) int numberOfSurroundingLteCells; // @synthesize numberOfSurroundingLteCells=_numberOfSurroundingLteCells;
@property(retain, nonatomic) NSMutableArray *lteCellTowers; // @synthesize lteCellTowers=_lteCellTowers;
@property(nonatomic) int numberOfSurroundingCdmaEvdoCells; // @synthesize numberOfSurroundingCdmaEvdoCells=_numberOfSurroundingCdmaEvdoCells;
@property(nonatomic) int numberOfSurroundingCdmaCells; // @synthesize numberOfSurroundingCdmaCells=_numberOfSurroundingCdmaCells;
@property(retain, nonatomic) NSMutableArray *cdmaEvdoTowers; // @synthesize cdmaEvdoTowers=_cdmaEvdoTowers;
@property(retain, nonatomic) NSMutableArray *cdmaCellTowers; // @synthesize cdmaCellTowers=_cdmaCellTowers;
@property(retain, nonatomic) NSString *appBundleId; // @synthesize appBundleId=_appBundleId;
@property(nonatomic) int numberOfSurroundingWifis; // @synthesize numberOfSurroundingWifis=_numberOfSurroundingWifis;
@property(nonatomic) int numberOfSurroundingCells; // @synthesize numberOfSurroundingCells=_numberOfSurroundingCells;
@property(retain, nonatomic) NSMutableArray *wirelessAPs; // @synthesize wirelessAPs=_wirelessAPs;
@property(retain, nonatomic) NSMutableArray *cellTowers; // @synthesize cellTowers=_cellTowers;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (void)copyTo:(id)arg1;
- (Class)responseClass;
- (unsigned int)requestTypeCode;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasNumberOfSurroundingScdmaCells;
- (id)scdmaCellTowerAtIndex:(unsigned long long)arg1;
- (unsigned long long)scdmaCellTowersCount;
- (void)addScdmaCellTower:(id)arg1;
- (void)clearScdmaCellTowers;
@property(nonatomic) _Bool hasNumberOfSurroundingLteCells;
- (id)lteCellTowerAtIndex:(unsigned long long)arg1;
- (unsigned long long)lteCellTowersCount;
- (void)addLteCellTower:(id)arg1;
- (void)clearLteCellTowers;
@property(nonatomic) _Bool hasNumberOfSurroundingCdmaEvdoCells;
@property(nonatomic) _Bool hasNumberOfSurroundingCdmaCells;
- (id)cdmaEvdoTowerAtIndex:(unsigned long long)arg1;
- (unsigned long long)cdmaEvdoTowersCount;
- (void)addCdmaEvdoTower:(id)arg1;
- (void)clearCdmaEvdoTowers;
- (id)cdmaCellTowerAtIndex:(unsigned long long)arg1;
- (unsigned long long)cdmaCellTowersCount;
- (void)addCdmaCellTower:(id)arg1;
- (void)clearCdmaCellTowers;
@property(readonly, nonatomic) _Bool hasAppBundleId;
@property(nonatomic) _Bool hasNumberOfSurroundingWifis;
@property(nonatomic) _Bool hasNumberOfSurroundingCells;
- (id)wirelessAPAtIndex:(unsigned long long)arg1;
- (unsigned long long)wirelessAPsCount;
- (void)addWirelessAP:(id)arg1;
- (void)clearWirelessAPs;
- (id)cellTowerAtIndex:(unsigned long long)arg1;
- (unsigned long long)cellTowersCount;
- (void)addCellTower:(id)arg1;
- (void)clearCellTowers;
- (void)dealloc;

@end

