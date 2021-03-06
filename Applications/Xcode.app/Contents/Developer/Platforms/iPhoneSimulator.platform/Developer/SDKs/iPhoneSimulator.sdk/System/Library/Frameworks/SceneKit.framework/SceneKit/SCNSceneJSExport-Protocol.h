//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JSExport.h"

@class NSArray, NSDictionary, NSString, NSURL, SCNMaterialProperty, SCNNode, SCNParticleSystem, SCNPhysicsWorld;

@protocol SCNSceneJSExport <JSExport>
+ (id)sceneWithURL:(NSURL *)arg1 options:(NSDictionary *)arg2 error:(id *)arg3;
+ (id)sceneNamed:(NSString *)arg1 inDirectory:(NSString *)arg2 options:(NSDictionary *)arg3;
+ (id)sceneNamed:(NSString *)arg1;
+ (id)scene;
@property(nonatomic) double frameRate;
@property(nonatomic) double endTime;
@property(nonatomic) double startTime;
@property(nonatomic, getter=isPaused) _Bool paused;
@property(retain, nonatomic) id fogColor;
@property(nonatomic) double fogDensityExponent;
@property(nonatomic) double fogEndDistance;
@property(nonatomic) double fogStartDistance;
@property(readonly, nonatomic) SCNMaterialProperty *background;
@property(readonly, nonatomic) SCNPhysicsWorld *physicsWorld;
@property(readonly, nonatomic) SCNNode *rootNode;
@property(readonly) NSArray *particleSystems;
- (_Bool)writeToURL:(NSURL *)arg1 options:(NSDictionary *)arg2 delegate:(id <SCNSceneExportDelegate>)arg3 progressHandler:(void (^)(float, NSError *, _Bool *))arg4;
- (void)setAttribute:(id)arg1 forKey:(NSString *)arg2;
- (id)attributeForKey:(NSString *)arg1;
- (void)removeParticleSystem:(SCNParticleSystem *)arg1;
- (void)removeAllParticleSystems;
- (void)addParticleSystem:(SCNParticleSystem *)arg1 withTransform:(struct SCNMatrix4)arg2;
@end

