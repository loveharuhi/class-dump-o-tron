//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PLSItem.h"

@class NSArray, NSNumber, NSString, PLSAssetProperties;

@interface PLSAsset : PLSItem
{
    NSNumber *_rating;
    NSNumber *_isFlagged;
    NSString *_caption;
    NSArray *_adjustments;
    NSString *_eventUUID;
    NSNumber *_longitude;
    NSNumber *_latitude;
    NSNumber *_exposureDate;
    NSNumber *_modificationDate;
    NSString *_originalFileName;
    _Bool _isVideo;
    NSArray *_facesInfo;
    PLSAssetProperties *_properties;
}

+ (id)assetWithUUID:(id)arg1;
+ (id)asset;
@property(retain, nonatomic) PLSAssetProperties *properties; // @synthesize properties=_properties;
@property(retain, nonatomic) NSArray *facesInfo; // @synthesize facesInfo=_facesInfo;
@property(retain, nonatomic) NSString *originalFileName; // @synthesize originalFileName=_originalFileName;
@property(retain, nonatomic) NSNumber *latitude; // @synthesize latitude=_latitude;
@property(retain, nonatomic) NSNumber *longitude; // @synthesize longitude=_longitude;
@property(retain, nonatomic) NSNumber *modificationDate; // @synthesize modificationDate=_modificationDate;
@property(retain, nonatomic) NSNumber *exposureDate; // @synthesize exposureDate=_exposureDate;
@property(retain, nonatomic) NSString *eventUUID; // @synthesize eventUUID=_eventUUID;
@property(retain, nonatomic) NSString *caption; // @synthesize caption=_caption;
@property(retain, nonatomic) NSArray *adjustments; // @synthesize adjustments=_adjustments;
@property(nonatomic) _Bool isVideo; // @synthesize isVideo=_isVideo;
@property(retain, nonatomic) NSNumber *isFlagged; // @synthesize isFlagged=_isFlagged;
@property(retain, nonatomic) NSNumber *rating; // @synthesize rating=_rating;
- (id)_itemType;
- (_Bool)isEquivalentTo:(id)arg1;
- (id)getFacesArray;
- (id)propertyList;
- (id)initFromPropertyList:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (void)dealloc;
- (id)initWithUUID:(id)arg1;
- (id)init;

@end
