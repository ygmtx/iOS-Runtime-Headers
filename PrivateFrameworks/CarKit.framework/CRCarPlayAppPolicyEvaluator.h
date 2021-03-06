/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CarKit.framework/CarKit
 */

@interface CRCarPlayAppPolicyEvaluator : NSObject {
    NSSet * __simulatedAccessoryProtocols;
    CRCarPlayAppBlacklist * _blacklist;
    BOOL  _geoSupported;
    CARSessionStatus * _sessionStatus;
}

@property (nonatomic, retain) NSSet *_simulatedAccessoryProtocols;
@property (nonatomic, retain) CRCarPlayAppBlacklist *blacklist;
@property (getter=isGeoSupported, nonatomic) BOOL geoSupported;

+ (id)_carIntentIdentifiers;

- (void).cxx_destruct;
- (BOOL)_appWithDeclaration:(id)arg1 supportsAllIntents:(id)arg2;
- (BOOL)_appWithDeclaration:(id)arg1 supportsAnyIntents:(id)arg2;
- (BOOL)_connectedProtocolsIntersectsAppProtocols:(id)arg1;
- (id)_sessionStatus;
- (id)_simulatedAccessoryProtocols;
- (id)blacklist;
- (id)effectivePolicyForAppDeclaration:(id)arg1;
- (void)fetchApplicationBundleIdentifiersForCarIntents:(id /* block */)arg1;
- (id)init;
- (BOOL)isGeoSupported;
- (void)setBlacklist:(id)arg1;
- (void)setGeoSupported:(BOOL)arg1;
- (void)set_simulatedAccessoryProtocols:(id)arg1;

@end
