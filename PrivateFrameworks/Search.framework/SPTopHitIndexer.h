/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Search.framework/Search
 */

@class CPSearchMatcher, NSArray, NSString;

@interface SPTopHitIndexer : SPContentIndexer {
    CPSearchMatcher *_matcher;
    NSString *_queryString;
    NSArray *_searchDomains;
}

+ (id)indexerForTopHits;
+ (void)preheat;

- (float)_calculateMovingAverageWithLastTime:(double)arg1 andLastAverage:(float)arg2;
- (void*)_copyExternalRecordForIdentifier:(unsigned long long)arg1 domain:(NSUInteger)arg2;
- (void*)_copyRecordForApplication:(id)arg1;
- (void*)_copyRecordForExternalID:(unsigned long long)arg1 displayIdentifier:(id)arg2 category:(id)arg3;
- (id)_fetchAndCleanQueryResults:(id)arg1;
- (id)_getDisplayIdentifierForDomain:(NSUInteger)arg1;
- (BOOL)_openOrCreateStore;
- (void)_setTopHitWithLocalRecord:(void*)arg1 content:(id)arg2 stringIdentifier:(id)arg3 domain:(NSUInteger)arg4 query:(id)arg5;
- (void)beginSearch:(id)arg1 domains:(id)arg2;
- (void)dealloc;
- (id)init;
- (BOOL)nextSearchResults:(id*)arg1;
- (void)removeIdentifier:(id)arg1;
- (void)setIdentifier:(id)arg1 forRecordDictionary:(id)arg2;
- (void)setTopHit:(unsigned long long)arg1 domain:(NSUInteger)arg2 queryString:(id)arg3;
- (void)setTopHitWithApplication:(id)arg1 queryString:(id)arg2;

@end