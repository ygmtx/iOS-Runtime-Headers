/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@class CalPreferences, NSArray, NSDate, NSNumber, NSString;

@interface CalendarPreferences : NSObject {
    BOOL _drawDebugViewColors;
    CalPreferences *_preferences;
}

@property(retain) NSArray * calendarUUIDsExcludedFromNotifications;
@property(retain) NSNumber * dayViewHourScale;
@property(retain) NSArray * deselectedCalendarSyncHashes;
@property BOOL disableContinuity;
@property BOOL drawDebugViewColors;
@property BOOL immediateAlarmCreation;
@property(retain) NSNumber * lastSuspendTime;
@property(retain) NSNumber * lastViewMode;
@property(retain) NSNumber * lastViewedDate;
@property(retain) NSNumber * locationSearchResultLimit;
@property(retain) NSString * overlayCalendarID;
@property unsigned int promptForCommentWhenDeclining;
@property BOOL requestSyncOnApplicationLaunch;
@property(retain) NSString * searchString;
@property BOOL showDebugGridOverlay;
@property BOOL showEventsInPhoneMonthView;
@property BOOL showExperimentalUI;
@property BOOL showListView;
@property BOOL showMonthDividedListView;
@property BOOL showWeekNumbers;
@property(retain) NSDate * simulatedCurrentDate;
@property BOOL swipeToDeleteEnabled;
@property BOOL travelEngineEnabled;
@property BOOL viewedTimeZoneAutomatic;
@property(retain) NSNumber * weekStart;
@property(retain) NSNumber * weekViewHourScale;

+ (id)sharedPreferences;

- (void).cxx_destruct;
- (id)calendarUUIDsExcludedFromNotifications;
- (id)dayViewHourScale;
- (id)deselectedCalendarIDsFromCalendars:(id)arg1;
- (id)deselectedCalendarSyncHashes;
- (BOOL)disableContinuity;
- (BOOL)drawDebugViewColors;
- (BOOL)immediateAlarmCreation;
- (id)init;
- (id)lastSuspendTime;
- (id)lastViewMode;
- (id)lastViewedDate;
- (id)locationSearchResultLimit;
- (id)overlayCalendarID;
- (unsigned int)promptForCommentWhenDeclining;
- (BOOL)requestSyncOnApplicationLaunch;
- (id)searchString;
- (void)setCalendarUUIDsExcludedFromNotifications:(id)arg1;
- (void)setDayViewHourScale:(id)arg1;
- (void)setDeselectedCalendarIDs:(id)arg1;
- (void)setDeselectedCalendarSyncHashes:(id)arg1;
- (void)setDisableContinuity:(BOOL)arg1;
- (void)setDrawDebugViewColors:(BOOL)arg1;
- (void)setImmediateAlarmCreation:(BOOL)arg1;
- (void)setLastSuspendTime:(id)arg1;
- (void)setLastViewMode:(id)arg1;
- (void)setLastViewedDate:(id)arg1;
- (void)setLocationSearchResultLimit:(id)arg1;
- (void)setOverlayCalendarID:(id)arg1;
- (void)setPromptForCommentWhenDeclining:(unsigned int)arg1;
- (void)setRequestSyncOnApplicationLaunch:(BOOL)arg1;
- (void)setSearchString:(id)arg1;
- (void)setShowDebugGridOverlay:(BOOL)arg1;
- (void)setShowEventsInPhoneMonthView:(BOOL)arg1;
- (void)setShowExperimentalUI:(BOOL)arg1;
- (void)setShowListView:(BOOL)arg1;
- (void)setShowMonthDividedListView:(BOOL)arg1;
- (void)setShowWeekNumbers:(BOOL)arg1;
- (void)setSimulatedCurrentDate:(id)arg1;
- (void)setSwipeToDeleteEnabled:(BOOL)arg1;
- (void)setTravelEngineEnabled:(BOOL)arg1;
- (void)setViewedTimeZoneAutomatic:(BOOL)arg1;
- (void)setWeekStart:(id)arg1;
- (void)setWeekViewHourScale:(id)arg1;
- (BOOL)showDebugGridOverlay;
- (BOOL)showEventsInPhoneMonthView;
- (BOOL)showExperimentalUI;
- (BOOL)showListView;
- (BOOL)showMonthDividedListView;
- (BOOL)showWeekNumbers;
- (id)simulatedCurrentDate;
- (BOOL)swipeToDeleteEnabled;
- (BOOL)travelEngineEnabled;
- (BOOL)viewedTimeZoneAutomatic;
- (id)weekStart;
- (id)weekViewHourScale;

@end