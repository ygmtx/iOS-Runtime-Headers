/* Generated by RuntimeBrowser.
 */

@protocol IFCentroidStoreInternal <IFCentroidStore, IFCentroidStoreCounting>

@required

- (<IFVector> *)centroid;
- (double)centroidScoreForFeature:(IFFeature *)arg1;
- (<IFVector> *)centroidWithScaling:(NSDictionary *)arg1;
- (void)enumerateStateWithBlock:(void *)arg1; // needs 1 arg types, found 10: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, IFFeature *, unsigned int, NSDictionary *, id*, BOOL, void*
- (IFFeature *)featureForIndex:(unsigned int)arg1;
- (unsigned int)indexForFeature:(IFFeature *)arg1;
- (IFCentroidModelParameters *)parameters;
- (BOOL)setCentroidFeature:(IFFeature *)arg1;
- (void)setParameters:(IFCentroidModelParameters *)arg1;
- (<IFVector> *)vectorFromFeatureVector:(IFFeatureVector *)arg1;

@end