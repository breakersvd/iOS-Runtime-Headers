/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKPlaceTransitAttributionViewController : UITableViewController <GEOResourceManifestTileGroupObserver, MKStackingViewControllerPreferredSizeUse> {
    NSString *_attributionSummary;
    BOOL _isAttributionURLAvailable;
    MKMapItem *_mapItem;
}

@property (nonatomic, copy) NSString *attributionSummary;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, retain) MKMapItem *mapItem;
@property (nonatomic, readonly) BOOL requiresPreferredContentSizeInStackingView;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (BOOL)_hasAttribution;
- (void)_presentTransitAttributionDetails;
- (id)attributionSummary;
- (void)dealloc;
- (id)initWithMapItem:(id)arg1;
- (id)mapItem;
- (int)numberOfSectionsInTableView:(id)arg1;
- (BOOL)requiresPreferredContentSizeInStackingView;
- (void)resourceManifestManagerDidChangeActiveTileGroup:(id)arg1;
- (void)setAttributionSummary:(id)arg1;
- (void)setMapItem:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

@end